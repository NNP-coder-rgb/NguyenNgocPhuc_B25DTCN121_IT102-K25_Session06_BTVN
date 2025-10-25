#include <stdio.h>

int main (){
	int n;
	do{
	
	printf("Nhap vao so n:");
	scanf("%d",&n);
	if(n < 1 || n > 10){
		printf("Thong tin ban nhap bi loi, vui long nhap lai!\n");
	}
	} while(n < 1 || n > 10);
	
	for(int i = 1;i <= 10; i++){
		printf("%d x %d = %d\n",i,n,i*n);
	}
	return 0;
} 
