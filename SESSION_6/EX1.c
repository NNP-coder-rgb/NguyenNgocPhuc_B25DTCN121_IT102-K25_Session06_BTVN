#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so n:");
	scanf("%d",&n);
	
	for(int i=100; i >= n; i--){
		printf("%d ",i);
	}
	return 0;
}
