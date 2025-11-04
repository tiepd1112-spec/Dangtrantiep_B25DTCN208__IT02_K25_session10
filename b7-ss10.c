#include <stdio.h>

int main() {
    int n;
   
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

   int i;
    printf("Nhap cac phan tu cua mang (theo thu tu tang dan):\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int x;
    int left, right, mid;
     int found = 0; 
    
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    
    left = 0;
    right = n - 1;



    
    while(left <= right) {
        mid = (left + right) / 2; 

        if(a[mid] == x) {
            printf("Tim thay %d tai vi tri chi so %d.\n", x, mid);
            found = 1;
            break;
        }
        else if(a[mid] < x) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }
    if(found == 0) {
        printf("Khong tim thay.\n");
    }

    return 0;
}



