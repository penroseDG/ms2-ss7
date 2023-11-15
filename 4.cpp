#include<stdio.h>
#include<stdlib.h>
int main(){
	int number,quantity=0;
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&number);
	do{
		printf("INTEGER NUMBER\n");
		printf("1. In ra day so nho hon hoac bang n va tinh tong\n");
		printf("2. In ra va dem cac so chia het cho 3 nho hon n\n");
		printf("3. Kiem tra xem co phai so nguyen to khong\n");
		printf("4. Kiem tra xem co phai so hoan hao khong\n");
		printf("5. Tinh tong cac uoc cua n\n");
		printf("6. Tinh gia thua cua n\n");
		printf("7. In ra so dao nguuoc cua n\n");
		printf("8. In ra so nguyen tu 1-n\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban la: ");
		int choice,i,sum=0;scanf("%d",&choice);
		int reverseNumber=0,factorial=1;
		switch (choice){
			case 1:
				for(i=0;i<=number;i++){
					sum +=i;
					printf("%d\n",i);
				}
				printf("Tong n so la: %d\n",sum);
				break;
			case 2:
				for(i=1;i<=number;i++){
					if(i%3==0){
						printf("%d\n",i);
						quantity++;
					}	
				}
				printf("So luong so chia het cho 3 tu 1-n la: %d\n",quantity);
				break;
			case 3:
				for(i=1;i<=number;i++){
					if(number%i==0){
						quantity++;
					}
				}
				if(quantity==2){
						printf("%d la so nguyen to\n",number);
					}else{
						printf("%d khong phai la so nguyen to\n",number);
				}
				break;
			case 4: 
				for(i=1;i<number;i++){
					if(number%i==0){
						sum+=i;
					}
				}
				if(sum==number){
					printf("%d la so hoan hao\n",number);
				}else{
					printf("%d khong phai la so hoan hao\n",number);
				}
				break;
			case 5:
				for(i=1;i<number;i++){
					if(number%i==0){
						sum+=i;
					}
				}
				printf("Tong cac uoc cua n la: %d\n",sum);
				break;
			case 6:
				for(i=1;i<=number;i++){
					factorial*=i;
				}
				printf("Giai thua cua n la: %d\n",factorial);
				break;
			case 7:
				while(number!=0){
					reverseNumber=reverseNumber*10+number%10;
					number/=10;
				}
				printf("So dao nguoc la: %d\n",reverseNumber);
				break;
			case 8:
				for(i=1;i<=number;i++){
					printf("%d\n",i);
				}
			case 9:
				exit(0);
		}	
	}while("Chon tu 1-9");
}
