#include <stdio.h>
int main(){
	int size,i,j;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", &number[i]);
	}
	int temp=0;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(number[j]>number[j+1]){
			   temp = number[j];
			   number[j]=number[j+1];
			   number[j+1]=temp;
		    }
		}
	}
    printf("Mang sau khi sap xep la: ");
    for(i=0;i<size;i++){
    	printf("%d ", number[i]);
    }
}
