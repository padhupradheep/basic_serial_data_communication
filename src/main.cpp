#include <iostream>
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()using namespace std;
#include <string.h>
int main() 
{

//Opening and reading from the serial port!  
	int serial_port = open("/dev/pts/4", O_RDWR);
	std::cout<<"The serial port is:"<<serial_port<<std::endl;
	char read_buf [256];
	memset(&read_buf, '\0', sizeof(read_buf));
	// int num_bytes = read(serial_port, &read_buf, sizeof(read_buf));
	// std::cout<<num_bytes<<std::endl;

//Opening and writing to the serial port:
	int n = write(serial_port, "I have opened the port and wrote a data", 30);

}
// Reference: https://blog.mbedded.ninja/programming/operating-systems/linux/linux-serial-ports-using-c-cpp/#overview