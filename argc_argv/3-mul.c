#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return(0);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (1);
}
