# basic_serial_data_communication

Repository for cpp communication using virtual serial port. 

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

Author: Pradheep Krishna

For more reference:
1. Stack overflow-Virtual-serial-port-for-linux(https://stackoverflow.com/questions/52187/virtual-serial-port-for-linux)
2. Termios wikibooks
