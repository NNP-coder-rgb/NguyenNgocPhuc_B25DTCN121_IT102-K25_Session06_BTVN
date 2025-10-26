#include <stdio.h> 

int main (){
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	
	printf("Cac chu so cua %d la: ",n);
	int temp = n;
	int dao = 0;
	while(n>0){
		int chu_so = n % 10;
		dao = dao * 10 + chu_so;
		n = n/10;
	}
	while(dao > 0){
		int chu_so = dao % 10;
		printf("%d ",chu_so);
		dao /= 10;
	}
	return 0; 
}

