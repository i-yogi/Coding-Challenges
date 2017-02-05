#include<stdio.h>

void rotateImage( int img[4][4], int n){

	int temp, i, j;

	printf("\nImg before 90D clockwise rotate:\n");
	for( i = 0; i< 4; i++){
		printf("\n");
		for( j = 0; j< 4; j++)
			printf(" %d ", img[i][j]);
	}
	

	for( i = 0; i< n/2; i++){
		for( j = i; j< n-1-i; j++){
			temp = img[i][j];

			img[i][j] = img[n-1-j][i];
			img[n-1-j][i] = img[n-1-i][n-1-j];
			img[n-1-i][n-1-j] = img[j][n-1-i];
			img[j][n-1-i] = temp;
		}
	}

	printf("\nImg after 90D clockwise rotate:\n");
	for( i = 0; i< 4; i++){
		printf("\n");
		for( j = 0; j< 4; j++)
			printf(" %d ", img[i][j]);
	}
}

int main(){

	int i, j;
	int img[4][4];
	
	for( i = 0; i< 4; i++)
		for( j = 0; j< 4; j++)
			img[i][j] = (i+j*4+10);
		
	rotateImage( img, 4);

	return 1;
}









