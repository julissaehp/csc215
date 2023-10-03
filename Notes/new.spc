3A # Load from 47 into the acc
47
00
06 #MVI B, 01
01
A0 # AND acc with B
3A #Load from 47 into acc
47
00
#Jump to Even if 0
CA
11
00

#ODD
07 # rotate the acc to the left(shift right)
32 #store acc into 47
47
00
76 #halt

#Even
0F Rotate the acc to the right
32 store the acc into 47
47
00
76 #halt

===
47:11

#rotations: 
#left= least significant bit is moved to the carry flag and carry flags previous value is moved into the most significant bit in the acc, 
#Right= Most significantbit is moved to carry flag, carry flag previous value is moved into the LSB of the acc