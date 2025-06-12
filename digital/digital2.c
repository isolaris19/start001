#include <stdio.h>

int main() {
	float x, y, res;
	char s = 'S';

	printf("Напишите первое число:");
	scanf("%f", &x);
	printf("Напишите второе число:");
	scanf("%f", &y);

	res = x / y;

	printf("Result: %.2f\n", res);
	printf("%c\n", s);

	return 0;
}
