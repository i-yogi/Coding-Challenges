#include<stdio.h>

void guessCnB( int secret[], int guess[]){
	int cows = 0, bulls = 0;
		
	for( int i = 0; i< 4; i++)
		if( guess[i] == secret[i])
			bulls++;
	for( int i = 0; i< 4; i++){
		for( int j=0; j< 4; j++){
			if( secret[i] == guess[j] && i!=j )
				cows++;
		}
	}

	printf("\nCows -> %d\nBulls -> %d\n", cows, bulls);
}

int main(){

	int secret[] = { 9, 2, 6, 8};

	int guess1[] = { 2, 4, 7, 8};
	int guess2[] = { 8, 6, 2, 9};
	int guess3[] = { 9, 2, 5, 7};

	guessCnB( secret, guess1);
	guessCnB( secret, guess2);
	guessCnB( secret, guess3);
}