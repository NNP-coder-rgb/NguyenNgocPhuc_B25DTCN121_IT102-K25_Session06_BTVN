#include <stdio.h>

int main (){
	int a,b;
	
	do{
		printf("Nhap vao so nguyen duong a (a>0):");
	scanf("%d",&a);
	
	printf("Nhap vao so nguyen duong b (b>0):");
	scanf("%d",&b);
		if(a <= 0 || b <= 0){
			printf("Ban hay nhap so nguyen DUONG\n");
		}
	}while(a <= 0 || b <= 0);
	
	int x = a, y = b;
	while(x!=y){
		if(x > y){
			x = x-y;
		}else{
			y = y-x;
		}
	}
	int BCNN;
	BCNN = a * b /x;
	printf("BCNN cua %d va %d la %d",a,b,BCNN);
	return 0;
}
