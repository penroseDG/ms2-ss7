#include<stdio.h>
#include<stdlib.h>
int main(){
	float deposite,interestRate,monthGive,money;
	int month;
	printf("Nhap vao so tien da gui: ");
	scanf("%f",&deposite);
	printf("Nhap vao lai suat (%%): ");
	scanf("%f",&interestRate);
	printf("Nhap vao so thang gui: ");
	scanf("%f",&monthGive);
	if(monthGive>12){
		printf("khong hop le");
		exit(1);
	}
	printf("Thang|Tien gui\t\t|Tien lai\n");
	for(month=1;month<=monthGive;month++){
		money+=deposite;
		deposite=money*((float)interestRate/100.0);
		printf("%d    |%.1f\t\t|%.1f\n",month,money,deposite);
	}
}
