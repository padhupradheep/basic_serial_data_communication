#include <iostream>
#include <fcntl.h> // Contains file controls like O_RDWR
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()using namespace std;
#include <string.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void function()
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

// Logical and operation. Here you can note that the hexadecimal value was converted to decimal value while printing

	int a = 0x80;
	int b = 0x80;
	uint16_t c= a&b;
	cout<<"Logical and operation:"<<c<<endl ;

	
}

int main() 
{
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    function();
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
 	int duration = duration_cast<microseconds>( t2 - t1 ).count();
    cout <<"Processing time in microseconds"<<duration<<endl;
}
// Reference: https://blog.mbedded.ninja/programming/operating-systems/linux/linux-serial-ports-using-c-cpp/#overview