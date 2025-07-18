#include <stdio.h>
struct polynomial{
int coeff;
int expo;
};
int main(){
	struct polynomial poly1[13];
	struct polynomial poly2[13];
	struct polynomial result[20];
	int n1,n2,i=0,j=0,k=0;
	printf("Enter number of terms in polynomial 1:");
	scanf("%d",&n1);
	printf("Enter terms in decreasing order of exponent \n");
	for (int i=0;i<n1;i++){
		printf("Enter coefficient and exponent of term %d:",i+1);
		scanf("%d%d",&poly1[i].coeff,&poly1[i].expo);
	}
	printf("Enter number of terms in polynomial 2:");
	scanf("%d",&n2);
	printf("Enter terms in decreasing order of exponent \n");
	for (int j=0;j<n2;j++){
		printf("Enter coefficient and exponent of term %d:",j+1);
		scanf("%d%d",&poly2[j].coeff,&poly2[j].expo);
	}
	while (i<n1 && j<n2){
		if (poly1[i].expo==poly2[j].expo){
			result[k].coeff=poly1[i].coeff+poly2[j].coeff;
			result[k].expo=poly1[i].expo;
			i++,j++;
		}
		else if (poly1[i].expo>poly2[j].expo){
			result[k]=poly1[i++];
		}
		else{
		result[k]=poly2[j++];
		}
		k++;
	}
	while (i<n1){
		result[k++]=poly1[i++];
	}
	while (j<n2){
		result[k++]=poly2[j++];
	}
	for (int i=0;i<k;i++){
		printf("%d x^%d",result[i].coeff,result[i].expo);
		if (i!=k-1){
			printf("+ ");
		}
	}
	return 0;
}
