#include <stdio.h>

int main() {
    int n, i, x, count = 0;

   
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    
    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            count++;
        }
    }

 
    if(count > 0)
        printf("So %d xuat hien %d lan trong mang.\n", x, count);
    else
        printf("Khong tim thay so %d trong mang.\n", x);

    return 0;
}



