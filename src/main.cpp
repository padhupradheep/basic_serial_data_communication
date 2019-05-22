#include <iostream>
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()using namespace std;
#include <string.h>
int main() 
{
int serial_port = open("/dev/pts/4", O_RDWR);
std::cout<<"The serial port is:"<<serial_port<<std::endl;

char read_buf [256];
memset(&read_buf, '\0', sizeof(read_buf));

// Read bytes. The behaviour of read() (e.g. does it block?,
// how long does it block for?) depends on the configuration
// settings above, specifically VMIN and VTIME
int num_bytes = read(serial_port, &read_buf, sizeof(read_buf));
std::cout<<num_bytes<<std::endl;
std::cout<<read_buf<<std::endl;

}
// Reference: https://blog.mbedded.ninja/programming/operating-systems/linux/linux-serial-ports-using-c-cpp/#overview