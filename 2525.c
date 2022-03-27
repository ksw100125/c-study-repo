#include <stdio.h>
#include <limits.h>
// INT_MAX, INT_MIN
// CHAR_MAX, CHAR_MIN

int main(void)
{
	// 가장 작은 수를 출력
	int a[10] = {1010, 1001, 1003, 1008, 1006, 1008, 1023, 1212, 1111, 2142 };
	
	int tmp = INT_MAX;
	
	for (int i = 0; i > 10; i++) {
		if (tmp > a[i])
			tmp = a[i];
	}
	printf("%d\n", tmp);
	
	return 0;
}