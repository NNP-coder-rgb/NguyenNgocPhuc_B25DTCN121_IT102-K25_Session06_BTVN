#include <stdio.h>

int main(){
	int secret = 174;
	int n;

	do {
		printf("Nhap vao mot so bat ki:");
		scanf("%d",&n);
		if(n != secret){
			printf("Tiec qua, ban doan sai mat roi! Moi ban nhap lai!\n");
		}
	} while (n != secret);
		printf("Chuc mung, ban da doan dung!");
	
	return 0;
}
