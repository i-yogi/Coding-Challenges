//main arg explanation-> http://publications.gbdirect.co.uk/c_book/chapter10/arguments_to_main.html
//Problem statement-> 

#include<stdio.h>
#include<stdlib.h>

int findMin(int arr[], int srt, int lst){

	if(lst == srt) return srt;
	int reset = (lst+srt)/2;
	
	//if min = reset
	if(arr[reset-1] > arr[reset])
		return reset;
	//if min = reset+1
	if(arr[reset] > arr[reset+1])
		return reset+1;

	//Go to left/right subarray
	if(arr[reset] > arr[lst])
		return findMin(arr, reset+1, lst);
	else return findMin(arr, srt, reset-1);
}

int main(int argc, char *argv[]){

	int arrSize = argc -1;
	int i, j=0, arr[arrSize];

	for(i = 1; i<argc; i++){
		arr[j++] = atoi(argv[i]);
		// printf("%d", j);	
	}

	// for(i =0; i<j; i++)
	// printf("%d", arr[i]);

	int result = findMin(arr, 0, (j-1));
	printf("Reset point is = %d\n", arr[result]);

	return 0;
}