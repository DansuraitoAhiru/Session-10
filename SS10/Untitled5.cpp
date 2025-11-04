#include <stdio.h>
int main(){
	int size,i;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", &number[i]);
	}
	int searchValue;
	printf("Nhap so can tim: ");
	scanf("%d", &searchValue);
	int count=0, isFound=0;
	for(i=0;i<size;i++){
		if(searchValue==number[i]){
			count++;
			isFound=1;
			printf("Phan tu chi so thu %d co gia tri bang %d \n", i+1, number[i]);
			}
		}
		if(count!=0){
			printf("So can tim da xuat hien %d lan trong mang", count);
		}
		if(!isFound){
			printf("Ko co phan tu nao co gia tri bang %d \n", searchValue);
		}
}
	
