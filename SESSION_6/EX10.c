#include <stdio.h> 

int main (){
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	
	printf("Cac chu so cua %d la: ",n);
	while(n>0){
		int chu_so = n % 10;
		printf("%d ",chu_so);
		n = n/10;
	}
	return 0; 
}
