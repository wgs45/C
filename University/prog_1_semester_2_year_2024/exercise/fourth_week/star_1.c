#include <stdio.h>

int main() {
	int k=3, h= 0, p = 0, f = 3, q = 3, y = 0;
	int i, j, g;

	for(i = 0;i < 4; i++){
		for(j = k; j < 4; j++){
			printf("*");
		}
		k -= 1;
		printf("\n");
	}

	printf("\n");

	for(i = 0;i < 4; i++){
			for(j = h;j < 4; j++){
			printf("*");
		}
			h += 1;
			printf("\n");
	}

	printf("\n");

	for(i = 0; i < 4; i++){
			for(j = p; j < 4; j++){
			printf("*");
		}
			f -= 1;
			p += 1;
			printf("\n");
			for(g = f; g < 3; g++){
				printf(" ");
			}
	}

	printf("\n");

	printf("   ");

	for(i = 0; i < 4; i++){
		for(j = q; j < 4; j++){
			printf("*");
		}
		y += 1;
		q -= 1;
		printf("\n");
		for(g = y; g < 3 ; g++){
			printf(" ");
		}
	}


	return 0;
}