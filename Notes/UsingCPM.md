# Disk and I/O acess primtitive
- The loader has to pre-exist to do it's job and available when the power is turned on & when RESET is hit
- Warm start assumes a operating has been running previously
- i/o device driver routines required
- Driver routines loaded from disk along with CP/M
- vector is a three byte ump instrunction
- JMP, BOOT, JMP WBOOT
- BOOT= xx K CP/M - vectors from 0-5, then jumps to CCP
- WBOOT = warm start
- to adapt CP/M to new computer, provide the loader in prom and the 15 routines to be accessed through the vectors
# the basic disk operating system
- disk storage - 128 byte
- 2 record - 128 btes
- 1 block = 256 bytes = 2 records
- 1 group = 8 records - 1k bytes
- computer operaotr will work through pip or the ccp
# BDOS ERR on B: bad sectors
- carriage return = ignored 
- CTRL C = rebooted
# BDOS ERR on R: bad sectors
- REST
- pull out and replace the sticker on the notch hit CTRL C and BDOS will re read the disk directory
# CCP - console command processor
- executes resident commands using then promts for another command
# resident functions 
- DIR
# transient utilities
- STAT *.com - stattisitcs
- STAT LST = LPT

# Chapt 6
- vectors: operating systemw rote in memory location 5
- Each different size and vecotr will have the CP/M, CBIOS vecotrs starting at different addreses
- If PROM is called directly it will execute only on hardware configurations
- 