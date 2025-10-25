#include <stdio.h>

int main (){
	int a,b;
	
	do{
		printf("Nhap vao so nguyen a(a>0):");
	scanf("%d",&a);
	
	printf("Nhap vao so nguyen b(b>0):");
	scanf("%d",&b);
		if( a <= 0 || b <= 0){
			printf("Vui long nhap so nguyen DUONG\n");
		}
	} while(a <= 0 || b <= 0);
	
	int x = a, y = b;
	while(x != y){
		if(x > y){
			x= x-y;
		}else{
			y= y-x;
		}
	}
	printf("UCLN cua %d va %d la: %d", a,b,x);
	return 0; 
} 
