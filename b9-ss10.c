#include <stdio.h>

int main() {
    int n, i, j, temp, id;
    int left, right, mid, found = 0, swapped;

    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    int gia[n];

    printf("Nhap gia cua tung san pham:\n");
    for(i = 0; i < n; i++) {
        printf("San pham %d: ", i);
        scanf("%d", &gia[i]);
    }

    printf("Nhap ma san pham can tim (index): ");
    scanf("%d", &id);

    left = 0;
    right = n - 1;

    while(left <= right) {
        mid = (left + right) / 2;
        if(mid == id) {
            printf("Gia cua san pham co ma %d la: %d\n", id, gia[mid]);
            found = 1;
            break;
        } else if(mid < id) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(found == 0)
        printf("Khong tim thay san pham co ma %d\n", id);

    for(i = 0; i < n - 1; i++) {
        swapped = 0;
        for(j = 0; j < n - i - 1; j++) {
            if(gia[j] > gia[j + 1]) {
                temp = gia[j];
                gia[j] = gia[j + 1];
                gia[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)

