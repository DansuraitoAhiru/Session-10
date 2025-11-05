#include <stdio.h>
int main() {
    int n,i;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    int id[n], price[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap ma san pham %d: ", i + 1);
        scanf("%d", &id[i]);
        printf("Nhap gia san pham %d: ", i + 1);
        scanf("%d", &price[i]);
    }

    int searchID;
    printf("Nhap ma san pham can tim: ");
    scanf("%d", &searchID);

    int found = -1;
    for (i = 0; i < n; i++) {
        if (id[i] == searchID) {
            found = i;
            break;
        }
    }
    if (found == -1) {
           printf("Khong tim thay san pham!\n");
    } else {
           printf("Gia cua san pham voi ma ID %d la: %d", id[i], price[i]);
        }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (price[j] > price[j + 1]) {
                int temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;

                int tempID = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tempID;
            }
        }
    }

    printf("\nDanh sach san pham sau khi sap xep tang dan theo gia:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", price[i]);
    }
}
