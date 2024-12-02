#include<stdio.h>
int main(){
	int number[]={1,2,3,4,5,6,7};
	int ("%d",searchvalue);
	int start=0;
	int end= sizeof(number)/sizeof(int)-1;
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(number[mid]==searchvalue){
			printf("vi tri phan tu can tam o vi tri %d\n",mid);
			return 0;
		}else if(number[mid]>searchvalue){
			end = mid-1;
		}else{
			start=mid+1;
		}
	}
	printf("khong tim thay phan tu can tim");
	return 0;
}
