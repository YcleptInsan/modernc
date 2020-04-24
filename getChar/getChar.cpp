#include <iostream>
#include <stdio.h>

int main()
{
	int c;
	c = getchar() != EOF;
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	
}
