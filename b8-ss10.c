#include <stdio.h>

int main() {
    int n;
    int left, right, mid, found = 0, swapped;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    int i,j,temp;

    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n - 1; i++) {
        swapped = 0;
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
    }

    printf("Mang sau khi sap xep tang dan:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    int x;

    printf("\nNhap so can tim: ");
    scanf("%d", &x);

    left = 0;
    right = n - 1;

    while(left <= right) {
        mid = (left + right) / 2;
        if(a[mid] == x) {
            printf("Tim thay %d tai vi tri chi so %d.\n", x, mid);
            found = 1;
            break;
        } else if(a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(found == 0)
        printf("Khong tim thay.\n");

    return 0;
}

