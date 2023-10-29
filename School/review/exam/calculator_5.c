#include <stdio.h>
#include <stdlib.h>

int main() {
	char operator;
	double a, b;

	while (1) {
		printf("Enter an operator (+, -, *, /): ");
		scanf(" %c", &operator);

		printf("Enter two first and second value: ");
		scanf("%lf %lf", &a, &b);

        // switch case
		switch (operator) {
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;

		default:
			printf("There is no such operator or value.\n");
		}

		printf("\n");
	}
}
