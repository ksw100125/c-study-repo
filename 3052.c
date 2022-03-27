#include <stdio.h>

int main(void)
{
	int a[10];
	int memory[42];
	int num;
	// 반복문 for문
	// for (int i = 0; i < 10; i++)
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		a[i] = num % 42;
	}
	for (int i = 0; i < 42; i++) {
		memory[i] = 0;
	}
	
	for (int i = 0; i < 10; i++) {
		memory[a[i]]++;
		// int tmp = a[i];
		// memory[tmp]++;
	}
	
	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (memory[i] > 0) {
			count++;
		}
	}
	
	printf("%d\n", count);
	
	printf("Array a: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	printf("Array memory: ");
	for (int i = 0; i < 42; i++) {
		printf("%d ", memory[i]);
	}
	printf("\n");

	
	return 0;
}

// 배열의 인덱스는 0 부터 시작
// int a[3] a[0] a[1] a[2]
// a[3] -> Error! Out of range
