#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *    ssize_t write(int fd,const void *buf,size_r count);
 *
 * Return: 1 (error).
*/

int main(void)
{       char quo[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}	
