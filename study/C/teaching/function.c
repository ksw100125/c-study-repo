#include <stdio.h>

char incr_char(char input){
	return input + 1;
}

int main(void)
{
	char a;
	scanf("%c", &a);
	printf("결과: %c\n", incr_char(a));
	
	return 0;
}