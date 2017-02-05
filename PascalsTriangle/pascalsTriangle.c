#include<stdio.h>

void printPascalTriangle(int k){

	int line, i, c;

	for(line=1; line<=k; line++){
		c = 1;
		for(i=1; i<=line; i++){
				printf("%d", c);
				//binomial coefficient
				c = c * (line - i) / i;
		}
		printf("\n");
	}
}

int main(){

	int k;

	printf("\nEnter Integer (k):");
	scanf("%d", &k);

	printf("\nPascal's Triangle:\n");

	printPascalTriangle(k);

	return 0;
}