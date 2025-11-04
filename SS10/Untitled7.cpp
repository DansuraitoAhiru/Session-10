#include <stdio.h>
int main(){
	int number[]={1,4,5,36,37,39,49,199,399,4995};
	int searchValue;
	printf("Nhap so can tim: ");
	scanf("%d", &searchValue);
	int left,right,mid;
	left=0;
	right=sizeof(number)/sizeof(int);
	do {
		mid=left + (right-left)/2;
		if(searchValue<number[mid]){
			right=mid-1;
		}
		if(searchValue>number[mid]){
			left=mid+1;
		}
	} while (searchValue != number[mid] && left != right);
	if(number[mid]==searchValue){
		printf("\nPhan tu chi so %d co gia tri bang %d",mid,searchValue);
	} else {
		printf("\nKo tim thay phan tu co gia tri bang %d", searchValue);
	}
}
