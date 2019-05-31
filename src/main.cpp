#include <iostream>
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()using namespace std;
#include <string.h>
using namespace std;
int main() 
{

//Opening and reading from the serial port!  
	int serial_port = open("/dev/pts/4", O_RDWR);

	if(serial_port!=-1)
		{
		cout<<"The serial port is:"<<serial_port<<endl;
		char read_buf [256];
		memset(&read_buf, '\0', sizeof(read_buf));
		// int num_bytes = read(serial_port, &read_buf, sizeof(read_buf));
		// std::cout<<num_bytes<<std::endl;

//Opening and writing to the serial port:
		int n = write(serial_port, "I have opened the port and wrote a data", 30);
		}
// We are now going to look into performing leftshift and right shift operations:
	int i = 4;
	int j = i<<2;
	int k = i>>2;
	cout<<"The value generated for leftshift operator:"<<j<<endl;
	cout<<"The value generated for rightshift operator:"<<k<<endl;
}
// Reference: https://blog.mbedded.ninja/programming/operating-systems/linux/linux-serial-ports-using-c-cpp/#overview