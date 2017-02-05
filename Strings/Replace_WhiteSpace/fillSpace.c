#include<stdio.h>
#include<string.h>

void fillSpaces( char str[], int len){

	int sp = 0, i, newlen;
	char c;

	printf("String before transformation: %s\n", str);

	for( i = 0; i< len; i++){
		c = str[i];
		if( c == ' ')
			sp++;
	}	

	newlen = (sp*2)+len;
	printf("\n No. of spaces %d", sp);
	str[newlen--] = '\0';	

	for( i = len-1; i>=0; i--){
		if( str[i] == ' '){
			str[newlen--] = '0';
			str[newlen--] = '2';
			str[newlen--] = '%';
		} else{
			str[newlen--] = str[i];
		}
	}
	
	printf("String after transformation: %s\n", str);
}

int main(){
	char st[] = "Yogesh Rajaram Isawe                          ";

	fillSpaces( st, 20);
	
	return 1;
}