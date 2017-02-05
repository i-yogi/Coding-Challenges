#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool anagram( char *one, char *two){

	int olen = strlen(one);
	int tlen = strlen(two);

	int i;
	int count[256] = { 0 };

	if( olen != tlen)
		return false;
	else{

		for( i = 0; i < olen; i++)
			count[one[i]] = 1;

		for( i = 0; i < olen; i++)
			if( count[two[i]] == 0)
				return false;

		return true;
	}
}

int main( int argc, char **args){

	if( argc > 2){

		char *one = args[1];
		char *two = args[2];

		printf("String one: %s\n", one);
		printf("String two: %s\n", two);

		bool result = anagram(one, two);

		if( result)
			printf("Strings are anagram/ permutation.\n");
		else
			printf("Strings are NOT anagram/ permutation!\n");
	}
}