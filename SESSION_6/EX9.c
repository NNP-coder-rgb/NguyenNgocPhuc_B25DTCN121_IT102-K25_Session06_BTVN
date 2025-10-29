#include <stdio.h>

int main (){
	int MENU;
	int a,b,c;
	int sum;
	float average;
	int min, max;
	int da_nhap = 0;
	
	do{
		printf("MENU:\n 1.Nhap ba so\n 2.Tong ba so\n 3.Trung binh song ba so\n 4.So lon nhat\n 5.So nho nhat\n 6.Thoat\n");
		printf("Moi ban chon chuc nang:");
		scanf("%d",&MENU);
		
		switch(MENU){
			case 1:
				printf("Nhap vao so a:");
				scanf("%d",&a);
				
				printf("Nhap vao so b:");
				scanf("%d",&b);
				
				printf("Nhap vao so c:");
				scanf("%d",&c);
				da_nhap = 1;
				break;
			case 2:
				if(da_nhap == 0){
					printf("Vui long nhap vao 3 so a,b,c:\n");
				}else{
				
				sum = a + b +c;
				printf("Tong cua ba so la: %d\n",sum);
				}
				break;
				
			case 3:
				if(da_nhap == 0){
					printf("Vui long nhap vao 3 so a,b,c:\n");
				}else{
					
				average = (a + b + c)/3.0;
				printf("Trung binh cua ba so la: %.2f",average);
				}
				break;
				
			case 4:
				if(da_nhap == 0){
					printf("Vui long nhap vao 3 so a,b,c:\n");
				}else{
					
				max = a;
				if(b > max){			
					max = b;
				}
				if(c > max){
					max = c;
				}
				printf("So lon nhat la: %d\n",max);
				}
				break;
				
			case 5:
				if(da_nhap == 0){
					printf("Vui long nhap vao 3 so a,b,c:\n");
				}else{
					
				min = a;
				if(b < min){
					min = b;
				}
				if(c < min){
					min = c;
				}
				printf("So nho nhat la: %d\n",min);
				}
				break;
				
			case 6:
				printf("Tam biet!");
				break;
		default:
			printf("Loi: Vui long nhap lai thong tin\n");
	}
		}while(MENU != 6);
		return 0;
}
