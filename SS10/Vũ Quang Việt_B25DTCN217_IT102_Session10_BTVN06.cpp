#include <stdio.h>
int main(){
	int size,i,j;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", &number[i]);
	}
	
	int temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(number[j]>number[j+1]){
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
			if(number[j]==number[j+1]){
				return 0;
			}
		}
	}
	printf("Mang sau khi sap xep theo thu tu tang dan: ");
	for(i=0;i<size;i++){
	    printf("%d ", number[i]);
	}
} 
