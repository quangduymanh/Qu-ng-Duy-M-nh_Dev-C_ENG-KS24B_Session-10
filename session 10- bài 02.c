#include<stdio.h>
int main (){
	int arr[]={3,6,4,8,6,6};
	int n= sizeof (arr)/sizeof(int);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
    printf("so phan tu trong mang la \n");
    for(int i=0;i<n;i++){
    	printf("%d ",arr[i]);
	}
    return 0;
}
