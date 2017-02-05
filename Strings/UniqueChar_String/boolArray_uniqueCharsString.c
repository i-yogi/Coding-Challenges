#include<stdio.h>
#include<string.h>

int main(int argc, char **args){

	// printf("argc: %d\n", argc);

	char *inString = args[1];

	int strgLen = strlen(inString);

	int uniq[127] = { 0 };
	int i, c;

	if(strgLen > 128)
		printf("\nString DOES NOT contain all unique chars\n");
	else{

		// for( i=0; i<strgLen; i++){

		// 	c = inString[i];

		// 	if( uniq[c] == 1)
		// 		printf("\nString DOES NOT contain all unique chars\n");
		// 	else
		// 		uniq[c] = 1;		
		// }

		while (( c = *inString++)){

			if( uniq[c] == 1)
				printf("Duplicate!");
			else
				uniq[c] = 1;
		}
	}

	return 0;
}