#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void merge( char ar[], int l, int m, int h){

	int n1 = m-l+1;
	int n2 = h-m;

	char la[n1], ra[n2];

	int i, j, k = l;

	for( i=0; i< n1; i++)
		la[i] = ar[l+i];

	for( j=0; j< n2; j++)
		ra[j] = ar[m+j+1];

	i = j = 0;

	while( i<n1 && j<n2){

		if( la[i] <= ra[j]){

			ar[k] = la[i];
			i++; k++;
		} else{

			ar[k] = ra[j];
			j++; k++;
		}
	}

	while( i< n1){
		
		ar[k] = la[i];
		i++; k++;
	}

	while( j< n2){
		
		ar[k] = ra[j];
		j++; k++;
	}
}

void mergeSort( char ar[], int l, int h){

	if( l<h){

		int m = (l+h)/2;

		mergeSort(ar, l, m);
		mergeSort(ar, m+1, h);

		merge(ar, l, m, h);
	}
}

bool anagram( char *one, char *two){

	int oneLen = strlen(one);
	int twoLen = strlen(two);

	if( oneLen != twoLen)
		return false;
	else{

		mergeSort(one, 0, oneLen-1);
		mergeSort(two, 0, twoLen-1);

		printf("\nSorted string one: \t%s\n", one);
		printf("\nSorted string two: \t%s\n", two);

		for( int i =0; i< oneLen; i++)
			if( one[i] != two[i])
				return false;

		return true;
	}
}


int main( int argc, char **args){

	if( argc > 2){

		char *one = args[1];
		char *two = args[2];

		printf("\nString one: \t%s\n", one);
		printf("\nString two: \t%s\n", two);

		bool result = anagram(one, two);

		if( result)
			printf("\nStrings are anagram/ permutaion of one another.\n");
		else
			printf("\nStrings are NOT anagram/ permutaion of one another!\n");
	}
	return 0;
}