#include <stdio.h>

int main() {
    int n;
    int left, right, mid, found = 0;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    int i,j,temp;

    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int min;

 
    min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("So nho nhat trong mang la: %d\n", min);

   
    for(i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
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

