#include <stdio.h>

int main (){
	int Lua_chon_cua_ban;
	do{
		float a, b;
		printf("Nhap vao so a:");
		scanf("%f",&a);
		
		printf("Nhap vao so b:");
		scanf("%f",&b);
		
		printf("Nhap vao lua chon cua ban (1.Tong hai so, 2.Hieu hai so, 3.Tich hai so, 4.Thuong hai so, 5.Thoat):\n");
		scanf("%d",&Lua_chon_cua_ban);
		
		int Hop_le = 1;
		if(Lua_chon_cua_ban < 1 || Lua_chon_cua_ban > 5){
			Hop_le = 0;
			printf("Lua chon cua ban khong hop le! Vui long nhap lai.\n");
		}
		float Ket_qua;
		switch(Lua_chon_cua_ban){
			case 1:
				Ket_qua = a+b;
				printf("Tong = %.2f\n",Ket_qua);
				break;
			case 2:
				Ket_qua = a-b;
				printf("Hieu = %.2f\n",Ket_qua);
				break;
			case 3:
				Ket_qua = a*b;
				printf("Tich = %.2f\n",Ket_qua);
				break;
			case 4:
				Ket_qua = a/b;
				printf("Thuong = %.2f\n",Ket_qua);
				break;
			case 5:
				printf("Tam biet!\n");
		default:
			Hop_le = 0;					
		}
	} while(Lua_chon_cua_ban != 5);
	
	return 0;
}
