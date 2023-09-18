#!/usr/bin/env python3
import sys

def is_hex_byte_str(s):
    """
      >>> is_hex_byte_str('3A')
      True
      >>> is_hex_byte_str('3A2')
      False
      >>> is_hex_byte_str('3P')
      False
      >>> is_hex_byte_str('A0')
      True
      >>> is_hex_byte_str('P9')
      False
    """
    digits = '0123456789ABCDEF'
    return len(s) == 2 and s[0] in digits and s[1] in digits


def hex_byte2int(hbyte):
    """
    Takes a string containing two hexidecimal digits and returns its integer
    value.

      >>> hex_byte2int('3A')
      58
      >>> hex_byte2int('40')
      64
      >>> hex_byte2int(9)
      Traceback (most recent call last):
          ...
      TypeError: Parameter must be a string
    """
    digits = '0123456789ABCDEF'
    if type(hbyte) is not str:
        raise TypeError('Parameter must be a string')
    hbyte = hbyte.upper()
    if not(is_hex_byte_str(hbyte)):
        raise ValueError('Parameter must be string containing 2 hex digits')
    return digits.index(hbyte[1]) + digits.index(hbyte[0]) * 16


def split_and_validate_source(prog_src):
    """
      >>> split_and_validate_source(['A0', '4B', '00'])
      (['A0', '4B', '00'], [])
      >>> split_and_validate_source(['A0', '4B', '===', '80:F7'])
      (['A0', '4B'], ['80:F7'])
      >>> split_and_validate_source(['Whatever'])
      Invalid program source on line 1
      >>> split_and_validate_source(['A0', '4B', '===', '8X:F7'])
      Invalid program source on line 4
    """
    if '===' not in prog_src:
        split = prog_src, []
    else:
        loc = prog_src.index('===')
        split = prog_src[:loc], prog_src[loc+1:] 

    for num, line in enumerate(split[0]):
        if not(is_hex_byte_str(line)):
            print(f'Invalid program source on line {num + 1}') 
            return None

    for num, line in enumerate(split[1]):
        parts = line.split(':')
        if not(is_hex_byte_str(parts[0])) or not(is_hex_byte_str(parts[1])):
            print(f'Invalid program source on line {len(split[0]) + num + 2}') 
            return None

    return split


def make_file_bytearray(prog_and_data):
    """
      >>> pnd = (['3A', '07', '1c'], ['0f:7f', '10:02'])
      >>> output = make_file_bytearray(pnd)
      >>> len(output)
      256
      >>> output[1]
      7
      >>> output[16]
      2
    """
    program = prog_and_data[0]
    data = prog_and_data[1]
    byte_ints = [] 
    num_bytes = len(program)

    for hex_byte in program:
        byte_ints.append(hex_byte2int(hex_byte))
    for i in range(256 - num_bytes):
        byte_ints.append(0)
    for var in data:
        location, value = var.split(':') 
        byte_ints[hex_byte2int(location)] = hex_byte2int(value)

    return bytes(byte_ints)


def source_to_binary(lines, name):
    outfile = open(f'{name}.bin', 'wb')
    outfile.write(
        make_file_bytearray(split_and_validate_source(lines))
    )
    outfile.close()


if __name__ == "__main__":
    try:
        sourcefile = sys.argv[1]
        if sourcefile == '--test' or sourcefile == '--test_verbose':
            import doctest
            verbose = None if sourcefile == '--test' else True
            doctest.testmod(verbose=verbose)
            sys.exit()
        name, extension = tuple(sourcefile.split('.'))
        if extension != 'spc':
            raise ValueError(
                "Usage error: Source file must have .spc extension"
            )
        infile = open(sourcefile, 'r')
        lines = [line.strip() for line in infile.readlines()]
        infile.close()
        source_to_binary(lines, name)
    except IndexError:
        print('Usage error: Include source file')
        sys.exit()
    except FileNotFoundError:
        print('Usage error: Source file not found')
        sys.exit()
    except ValueError as e:
        print(e)
        sys.exit()
