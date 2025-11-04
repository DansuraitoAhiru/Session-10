#include <stdio.h>
#include <stdlib.h>
int main(){
	int size;
	int choice,i,j;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&size);
	int number[size];
	for(i=0;i<size;i++){
	  printf("Nhap phan tu thu %d: ", i+1);
	  scanf("%d", &number[i]);
	}
	
	do{
		printf("\n--------------- Quan li danh sach so nguyen --------------\n");
		printf("1. Them phan tu vao vi tri bat ky\n");
		printf("2. Xoa phan tu o vi tri bat ky\n");
		printf("3. Cap nhat gia tri tai vi tri bat ky\n");
		printf("4. Tim kiem phan tu trong mang\n");
		printf("5. Hien thi mang\n");
		printf("6. Sap xep mang\n");
		printf("7. Thoat chuong trinh\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				int indexInsert,valueInsert;
	            printf("Nhap vao chi so can them/chen:");
	            do{
		           scanf("%d",&indexInsert);
		           if(indexInsert>=0){
			       break;
		        }
		        printf("Chi so phan tu phai lon hon 0, vui long nhap lai:");
	            } while(1);
	            printf("Nhap vao gia tri can them/chen:");
	            scanf("%d",&valueInsert);
	            if(indexInsert<size){
	             	int newNumber[size+1];
		            for(i=0; i<size+1; i++){
		        	if(i<indexInsert){
				        newNumber[i] = number[i];
			        }else if(i==indexInsert){
			         	newNumber[i] = valueInsert;
			        }else{
				        newNumber[i] = number[i-1];
			        }
		            }       
		        printf("Mang sau khi them phan tu:\n");
		        for(i=0; i<size+1; i++){
			        printf("%d ",newNumber[i]);
		        }
	            }else{
		            int newNumber[indexInsert+1];
		            for(i=0;i<indexInsert+1;i++){
			        if(i<size){
				        newNumber[i] = number[i];
			        }else if(i<indexInsert){
				        newNumber[i] = 0;
			        }else{
			 	        newNumber[i] = valueInsert;
			        }
		        }
		        printf("Mang sau khi them phan tu:\n");
		        for(i=0; i<indexInsert+1; i++){
			       printf("%d ",newNumber[i]);
		        }
	            }          
				break;
			case 2: {
				int indexDelete;
				printf("Nhap gia tri muon xoa: ");
				scanf("%d",&indexDelete);
				int newNumber[size-1];
				for(i=0;i<size-1;i++){
					if(i<indexDelete){
						newNumber[i] = number[i];
					}else{
						newNumber[i] = number[i+1];
					}
				}
				printf("Mang sau khi xoa phan tu la: \n");
				for(i=0;i<size-1;i++){
					printf("%d ",newNumber[i]);
				}
				break;
			}
			case 3:
				int indexUpdate,valueUpdate;
				printf("Nhap vao chi so phan tu can cap nhat:");
				scanf("%d",&indexUpdate);
				printf("Nhap gia tri phan tu cap nhat:");
				scanf("%d",&valueUpdate);
				number[indexUpdate] = valueUpdate;
				break;
			case 4:{
				int searchValue;
				printf("\nNhap so can tim: ");
				scanf("%d", &searchValue);
				int isFound=0;
				for(i=0;i<size;i++){
					if(number[i]==searchValue){
						isFound =1;
						printf("\nPhan tu chi so %d co gia tri bang %d\n", i+1, number[i]);
					}
				}
				if(!isFound){
						printf("Ko co phan tu nao co gia tri bang %d\n", searchValue);
				}
				break;
			}
			case 5:
				printf("\nMang sau khi nhap la: ");
			    for(i=0;i<size;i++){
			    	printf("%d ", number[i]);
			    }
				break;
			case 6:
				int temp;
				for(i=0;i<size-1;i++){
					for(j=0;j<size-1-i;j++){
						if(number[j]>number[j+1]){
							temp=number[j];
							number[j]=number[j+1];
							number[j+1]=temp;
							}
						}
					}
				printf("Mang sau khi sap xep la: ");
				for(i=0;i<size;i++){
					printf("%d ", number[i]);
				}
				break;
			case 7:
				exit(0);
			}
	} while(choice!=7);
}
