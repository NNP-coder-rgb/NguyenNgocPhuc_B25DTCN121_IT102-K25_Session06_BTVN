#include <stdio.h>

int main (){
	int MENU;
	int a,b,c;
	int sum;
	float average;
	int min, max;
	
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
				break;
			case 2:
				printf("Nhap vao so a:");
				scanf("%d",&a);
				
				printf("Nhap vao so b:");
				scanf("%d",&b);
				
				printf("Nhap vao so c:");
				scanf("%d",&c);
				sum = a + b +c;
				printf("Tong cua ba so la: %d\n",sum);
				break;
			case 3:
				printf("Nhap vao so a:");
				scanf("%d",&a);
				
				printf("Nhap vao so b:");
				scanf("%d",&b);
				
				printf("Nhap vao so c:");
				scanf("%d",&c);
				average = (a + b + c)/3.0;
				printf("Trung binh cua ba so la: %.2f",average);
				break;
			case 4:
				printf("Nhap vao so a:");
				scanf("%d",&a);
				
				printf("Nhap vao so b:");
				scanf("%d",&b);
				
				printf("Nhap vao so c:");
				scanf("%d",&c);
				max = a;
				if(b > max){			
					max = b;
				}
				if(c > max){
					max = c;
				}
				printf("So lon nhat la: %d\n",max);
				break;
			case 5:
				printf("Nhap vao so a:");
				scanf("%d",&a);
				
				printf("Nhap vao so b:");
				scanf("%d",&b);
				
				printf("Nhap vao so c:");
				scanf("%d",&c);
				min = a;
				if(b < min){
					min = b;
				}
				if(c < min){
					min = c;
				}
				printf("So nho nhat la: %d\n",min);
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
