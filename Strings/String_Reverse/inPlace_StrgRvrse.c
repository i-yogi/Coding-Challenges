#include<stdio.h>

int main( int argc, char **args){

	char *strg = args[1];

	printf("Str : %s\n", strg);

	char *end = strg;

	char temp;

	while( *end){

		end++;
	}

	end--;

	printf("End : %s\n", end);

	while( strg < end){
		temp = *strg;

		printf("Temp : %c\n", temp);

		*strg++ = *end;
		*end-- = temp;
	}

	printf("Result : %s\n", args[1]);
}