#include <stdio.h>
int main(){
	int size,i,j;
	printf("Nhap so phan tu: ");
	scanf("%d", &size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", &number[i]);
	}
	
	int min;
	printf("So nguyen nho nhat trong mang la: ");
	for(i=0;i<size;i++){
		min=number[0];
		if(number[i]<min) min=number[i];
	}
	printf("%d\n",min);
	
	int minIndex,minValue,temp;
	for(i=0;i<size;i++){
		minIndex=i;
		for(j=i+1;j<size;j++){
			if(number[minIndex]>number[j]){
				minIndex=j;
		    }
		}
	    if(i!=minIndex){
	    	temp=number[i];
	    	number[i]=number[minIndex];
	    	number[minIndex]=temp;
	    }
	}
	printf("\nMang sau khi sap xep tang dan: ");
	for(i=0;i<size;i++){
		printf("%d ", number[i]);
	}
	
	int searchValue,left,right,mid;
	left=0;
	right=size-1;
	int found=0;
	printf("\nNhap gia tri can tim: ");
	scanf("%d", &searchValue);
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
	
