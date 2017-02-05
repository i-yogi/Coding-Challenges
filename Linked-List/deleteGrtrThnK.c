#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int d;
	struct node *n;
}node;

void deleteK(node **hd, int k){
	node *cur = (*hd);
	node *pre = NULL;

	if(cur==NULL) return;

	while(cur != NULL){
		if( cur->d > k && ( cur == (*hd))){
			(*hd) = cur->n;
			free(cur);
			cur = (*hd);
		} else{
			if( cur->d <= k){
				pre = cur;
				cur = cur->n;
			} else{
				pre->n = cur->n;
				free(cur);
				cur = pre->n;
			}
		}
	}
}

void add(node **hd, int v){
	node *cur = (*hd);
	node *new = (node*)malloc(sizeof(node));
	new->d = v;
	new->n = NULL;
		
	if((*hd)==NULL){
		(*hd) = new;
	} else{
		while(cur->n != NULL)
			cur = cur->n;
		cur->n = new;
	}
}

void display(node *hd){
	printf("\n");
	while(hd != NULL){
		printf("%d -> ", hd->d);
		hd = hd->n;
	}
	printf("Null\n");
}

int main(){
	int s, i, v, k;
	node *hd = NULL;
	printf("\nNo. of nodes : ");
	scanf("%d", &s);
	for(i=0; i<s; i++){
		printf("\nNode value : ");
		scanf("%d", &v);	
		add(&hd, v);
	}
	display(hd);

	printf("\nEnter key : ");
	scanf("%d", &k);
	deleteK(&hd, k);
	display(hd);
	
	return 1;
}