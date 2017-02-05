#include<stdio.h>

int main(){
	int i, j, k;
	printf("\nPrint prime no. till : ");
	scanf("%d", &k);
	
	int ar[k];
	for(i=2; i<=k; i++) ar[i] = 1;

	for( i=2; i<k; i++){
		for(j=2; (i*j)<= k; j++){
			ar[i*j] = 0;
		}
	}

	for(i=2; i<=k; i++){
		if(ar[i] != 0)
			printf(" %d ", i);
	}
}