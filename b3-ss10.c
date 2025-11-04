#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	int a[n],i;
	printf("Nhap cac phan tu cua mang:\n");
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	int x; 
	printf("Nhap so can tim:");
	scanf("%d",&x);
	int found=0;
	for(i=0;i<n;i++){
		if(a[i]==x){
			printf("Tim thay %d tai chi so %d\n",x,i);
			found=1;
			break;
			
		}
	
	}
	if(!found)
	

		printf("Khong tim thay\n");
	
	
	return 0;
	
}


