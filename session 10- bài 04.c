#include<stdio.h>
int main(){
	int arr[]={1,5,3,9,6,7};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n-1;i++){
		int min_index=i;
		for (int j=i+1;j<n-1;j++){
			if(arr[j]<arr [min_index]){
				min_index=j;
			}
		}
	    int temp = arr[min_index];
	    arr [min_index]=arr[i];
	    arr [i]= temp;
	}
	printf("so phan tu trong mang la: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
