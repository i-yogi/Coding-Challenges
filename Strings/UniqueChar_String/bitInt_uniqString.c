#include<stdio.h>

int main( int argc, char **args){

	char *inString = args[1];

	// printf("Arg : %s\n", inString);

	int chk = 0, c, b; 

	while( ( c = *inString++)){

		c -= 'a';

		if( ( chk & ( 1<< c)) > 0)
			printf( "\n Duplicate char\n");
		else{

			chk |= ( 1<< c);
		}
	}
}