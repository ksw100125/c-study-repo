#include <stdio.h>

int main(void)
{
	int A;
	
	printf("");
	scanf("%d", &A);

	if (A == 0)
	{
		printf("True");
	}
	else if (A%2 == 0)
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
	
	return 0;
}