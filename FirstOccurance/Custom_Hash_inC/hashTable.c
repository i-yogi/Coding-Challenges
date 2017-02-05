#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct lList{
	char *string;
	int count;
	struct lList *next;
}lList;

typedef struct hashTable{
	int size;
	lList **table;
}hashTable;

unsigned int hash(hashTable *ht, char *string){
	unsigned int hashVal = 0;
	for(; *string != '\0'; string++){
		hashVal = *string + (hashVal << 5) - hashVal;
	}

	return (hashVal % ht->size);
}

lList *lookUp(hashTable *ht, char *string){
	unsigned int hashVal = hash(ht, string);

	lList *cur = ht->table[hashVal];

	// for(; cur != NULL; cur = cur->next){
	// 	if(strcmp(string, cur->string) == 0)
	// 		return cur;
	// }

	if( cur == NULL )
		return NULL;
	else return cur;

	// return NULL;
}

int addEntry(hashTable *ht, char *string){
	unsigned int hashVal = hash(ht, string);
	printf("\nHash is %u", hashVal);

	lList *new = (lList*)malloc(sizeof(lList));

	new->string = strdup(string);
	if(lookUp(ht, string)){
		new->count = 2;
		printf("\n First Duplicate is %s", string);
		return 1;
	}
	else
		new->count = 1;
	new->next = NULL;

	ht->table[hashVal] = new;

	return 0;
}

// void printHashTable(hashTable *ht){
// 	lList *cur = ht->table[]
// }

int main(){

	int result, i;
	FILE *f = fopen("in2.txt", "r");
	char *in = (char*)malloc(10000*sizeof(char));
	int size;
	char *str;
	hashTable *hT = NULL;
	lList *cur;

	printf("\nEnter table size: ");
	scanf("%d", &size);
	printf("\nTable size is %d", size);

	hT = (hashTable*)malloc(sizeof(hashTable));

	hT->table = (lList**)malloc(sizeof(lList)*size);
	hT->size = size;

	fscanf(f, "%[^\n]", in);

	str = strtok(in, ",");

	// printf("\nFile contains :%s", str);

	// printf("\nEnter String to Hash Table:");
	// scanf("%s", str);



	while(str != NULL){

		result = addEntry(hT, str);	
		if (result == 1)
			break;
		else
			str = strtok(NULL, ",");
	}

	cur = hT->table[0];
	
	for(i=0 ; i<=size; i++){
		cur = hT->table[i];
		if(cur != NULL)	
			printf("\nHash Table:%s", cur->string);
	}

	// printf("\nEnter String to Hash Table:");
	// scanf("%s", str);

	// addEntry(hT, str);

	return 0;
}