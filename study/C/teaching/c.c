#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
				printf("#");
		}
		printf("switch\n");
	}
	
	return 0;
}

// 보이나요?