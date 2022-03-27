#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[50];
	
	arr[0] = 'a';
	arr[1] = 'p';
	arr[2] = 'p';
	arr[3] = 'l';
	arr[4] = 'e';
	arr[5] = '\0';
	
	printf("%s\n", arr); // apple 출력
	
	char arr2[50];
	
	// arr2 = arr; 이렇게 하면 안된다!
	strncpy(arr2, arr, 6);
	
	printf("%s\n", arr2);
	
	for (int i = 0; i < 6; i++) {
		printf("%c ", arr2[i]);
	}
	printf("\n");
}

