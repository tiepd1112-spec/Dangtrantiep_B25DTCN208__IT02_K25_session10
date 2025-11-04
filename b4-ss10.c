#include <stdio.h>
int main(){
	int arr[] = {1,4,29,51,24,3,5,6,2,9,6};

	int n = sizeof(arr)/sizeof(arr[0]);
	int k,temp;

	//Sap xep chon truc tiep
	for(int i=0;i<n-1;i++){
		k = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[k]){
				k = j;
			}
		}
		if(k!=i){
			temp = arr[i];
			arr[i] = arr[k];
			arr[k] = temp;
		}
	}

	printf("\nMang sap xep tang dan bang thuat toan chon truc tiep\n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

