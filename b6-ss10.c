#include <stdio.h>

int main() {
    int n;
    int swapped; 
   
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

       
        if(swapped == 0) {
            break;
        }
    }

   
    printf("Mang sau khi sap xep tang dan:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}


