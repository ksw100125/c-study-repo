#include <stdio.h>

int main(void)
{
	int  a;
	printf("한 발로 눈감고 균형잡은 시간을 입력해 주세요. :");
	scanf("%d", &a);
	if (a >= 25) {
		printf("당신의 신체나이는 20 ~ 30세 입니다.");
	}
	else if (a < 25) {
		printf("당신의 신체나이는 40 ~ 60세입니다.");
	}
	return 0;
}
