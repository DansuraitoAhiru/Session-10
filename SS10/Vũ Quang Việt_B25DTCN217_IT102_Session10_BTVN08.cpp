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
	
	int searchValue,left,right,mid,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(number[j]>number[j+1]){
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep: ");
	for(i=0;i<size;i++){
		printf("%d ", number[i]);
		}
	
	printf("\nNhap so can tim: ");
	scanf("%d", &searchValue);
	
	left=0;
	right=size;
	do{
		mid=left + (right-left)/2;
		if(number[mid]>searchValue){
			right=mid-1;
		}
		if(number[mid]<searchValue){
			left=mid+1;
		}
	} while (searchValue != number[mid] && left != right);
	
	if(number[mid]==searchValue){
		printf("\nPhan tu chi so %d co gia tri bang %d", mid, searchValue);
	} else {
		printf("\nKo tim thay phan tu co gia tri bang %d", searchValue);
	}
}
