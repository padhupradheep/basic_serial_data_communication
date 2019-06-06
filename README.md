# basic_serial_data_communication

# Repository for cpp communication using virtual serial port. 

For listing the serial port 
ls <tab> /de

Uses socat

First check for the pseudo ports:
socat -d -d pty,raw,echo=0 pty,raw,echo=0

Then assign the ports respectively in the code. 

If you want to test, 

1. For Reading, 

Open a terminal and send a message using the below command 

	$ echo "Test" > /dev/pts/5

then run the code.

2. For writing. 

Open a terminal and send a message using the below command 

	$ cat < /dev/pts/5

"cat" command is directing the serial port traffic to any app that you like; this particular app then just relays its stdin to its stdout. For our case it's the command line.

This repository works based on the CMake:
For more information on that please check: CMake_Tutorial(https://cmake.org/cmake-tutorial/)



For more reference:
1. Stack overflow-Virtual-serial-port-for-linux(https://stackoverflow.com/questions/52187/virtual-serial-port-for-linux)
2. Termios wikibooks

Other important basic informations:

Bitwise operator:

AND, OR, NOT, XOR performs the logical operations of the denoted function. 

|  Symbol | Operator       |
|---------|--------------  |
|    &    |  bitwise AND   |
|    |    | bitwise inc OR |
|    <<   |  left shift    |
|    >>   |  right shift   |
|    ~    |  bitwise NOT   |


Author: Pradheep Krishna


