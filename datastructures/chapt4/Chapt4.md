# 1. What are strings? Discuss some of the operations that can be performed on strings.
Strings are character arrays with a termination character (0 as the last element).
The operations available on arrays can likewise be applied on strings. 
So you can print individual characters, swap out some characters for others, and do a number of other things using strings.



# 2. How are strings represented in main memory?

Strings are represented as sequential blocks of data or as a series of data chunks.

# 3. How are strings read from the standard input device?

Strings are commonly read from the standard input device using the standard library, notably the scanf() method.
Strings can also be read from the standard input device using the get() and getchar() functions. Although gets() is being phased away in favor of fgets(). 


# 4. Explain how strings can be displayed on the screen?

strings are displayed through through printf() or putchar() or puts().

# 5. Explain the syntax of printf() and scanf()

The standard syntax of printf() is ("format_specifier", variable_name)
the standard syntax of scanf() is ("fortmat_specifier", &variable_name)

scanf() If the input data type is something other than a string, an ampersand (&) must be provided before the name of the variable to which the input is being allocated.

# 13. Differentiate between scanf() and gets().
with scanf() it will read the string and stop once it gets to a blank space. You can also gice specifics on what you want to be read.

Gets() solves the problems with scanf() by just taking the beginning position and running through until it reaches a null character.
