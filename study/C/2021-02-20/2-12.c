//여러 가지 정수형 변수
#include <stdio.h>
	
int main(void)
{
	short sh = 32767000000000;
	int in = 2147383647;
	long ln = 2147483647;
	long long lln = 123451234512345;
	
	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);
	
	return 0;
}

/#
#include <stdio.h>

int main(void)
{
	printf("short형 변수 출력 : 32767\n");
};
#/