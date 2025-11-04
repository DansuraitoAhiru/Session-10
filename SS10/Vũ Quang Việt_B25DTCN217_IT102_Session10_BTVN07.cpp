#include <stdio.h>
#include <stdio.h>
int main() {
    int number[] = {1, 4, 5, 36, 37, 39, 49, 199, 399, 4995};
    int searchValue;
    printf("Nhap so can tim: ");
    scanf("%d", &searchValue);

    int left = 0;
    int right = sizeof(number) / sizeof(int) - 1;
    int mid;
    int found = 0;

    while(left <= right) {
        mid = left + (right - left) / 2;
        if(number[mid] == searchValue) {
            found = 1;
            break;
        } else if(searchValue < number[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if(found) {
        printf("\nPhan tu chi so %d co gia tri %d", mid, searchValue);
    } else {
        printf("\nKhong tim thay gia tri %d trong mang!", searchValue);
    }
    return 0;
}
