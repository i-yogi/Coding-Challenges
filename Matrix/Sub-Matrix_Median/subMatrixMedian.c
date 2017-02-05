#include<stdio.h>

int main(int argc, char **args){

	FILE *fp = fopen(args[1], "r");
	if( fp == 0 ) perror(" ");

	int n, q, i, j, k, l;
	fscanf(fp, "%d", &n);
	int m[n][n];

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			fscanf(fp, "%d", &m[i][j]);

	printf("\nArray Entered: \n");
	for(int i=0; i<n; i++){
		printf("\n");
		for(int j=0; j<n; j++)
			printf(" %d ", m[i][j]);
	}
	
	fscanf(fp, "%d", &q);	
	int qr[q][4];

	for(i=0; i<q; i++)
		for(j=0; j<4; j++)
			fscanf(fp, "%d", &qr[i][j]);

	printf("\nQuery Entered: \n");
	for(int i=0; i<n; i++){
		printf("\n");
		for(int j=0; j<n; j++)
			printf(" %d ", qr[i][j]);
	}

	int ar[n*n];
	int a, c;
	for(i=0; i<q; i++){
		printf("\nFor Query no. -> %d\n", i+1);
		a = qr[i][0];
		c = qr[i][2];	
		//printf("\na-> %d | b-> %d\n", a, c);
		if((c-a)==0) printf("%d", m[a-1][a-1]);
		//printf("\nSingle cell at %d contains-> %d", a,m[a-1][c-1]);
		else if((c-a)<0) printf("\nInvalid Query!");
		else{
			//printf("\nfrom-> %d | to-> %d", a-1, c-1);
			l=0;
			for(j=a-1; j<c; j++)
				for(k=a-1; k<c; k++)	
					ar[l++] = m[j][k];
			for(int t=0; t<l; t++)
				printf(" %d ", ar[t]);
			//if((l%2)!=0) printf("\n%d", ar[l/2]);
		}
	}
	
	printf("\n");
	return 1;
}