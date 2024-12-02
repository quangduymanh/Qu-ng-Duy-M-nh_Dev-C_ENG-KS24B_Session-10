#include<stdio.h>
int main(){
	int a=5;
	int b[5]={1,2,3,4,5};
	int x;
	printf("moi ban nhap so ban muon kiem tra");
	scanf("%d",&x);
	for (int i=0;i<a;i++){
		if (b[i]==x){
			printf("phan tu ton tai trong mang \n%d",i);
			return 0;
		}
	}
	printf("phan tu trong mang khong ton tai");
	
	
	return 0;
}
