#include <stdio.h>

#define IN 1  //inside of word //
#define OUT 0 //outside of word //

//count lines words and characters in input //

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	c = getchar() != EOF;
	while(c != EOF) 
	{
		++nc;
		if(c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nl;
		}

  	printf("%d\n", state);
		c = getchar() != EOF;
	}

	printf("%d %d %d\n", nl, nw, nc);
}
