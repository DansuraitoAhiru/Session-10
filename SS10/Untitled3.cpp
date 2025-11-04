#include <stdio.h>
int main(){
	int size;
	int i;
	int isFound=0;
	int searchValue;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", &number[i]);
	}
	printf("Nhap gia tri can tim: ");
	scanf("%d", &searchValue);
	for(i=0;i<size;i++){
		if(searchValue==number[i]){
			isFound=1;
			printf("Phan tu chi so thu %d co gia tri bang %d \n", i+1, number[i]);
		}
	}
	if(!isFound){
		printf("Ko tim thay so co gia tri bang %d \n", searchValue);
	}
}
