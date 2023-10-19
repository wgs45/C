#include <stdio.h>

int collatzCount(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of steps for %d is %d\n", num, collatzCount(num));

    return 0;
}


int collatzCount(int num) {
	int count = 0;
	while (num > 1) {
		if (num % 2 == 0) {
			num /= 2;
		} else {
			num = num * 3 + 1;
		}
		count += 1;
	}
	return count;
}