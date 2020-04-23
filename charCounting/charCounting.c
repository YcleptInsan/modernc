#include <stdio.h>

main()
{
	long nc;
	double numC;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);

	numC = 0;
	for (numC = 0; getchar() != EOF; ++numC)
		; // Null statement 
	printf("%.0f\n", numC); 

}
