#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Nhap so Armstrong co 3 chu so vao: ");
	scanf("%d",&number);
	printf("%d\n",number/100);
	printf("%d\n",(number%100)/10);
	printf("%d\n",(number%100)%10);
	if(number==pow((number/100),3)+pow((number%100)/10,3)+pow((number%100)%10,3)){
		printf("\nDay la so Armstrong");
	}else{
		printf("\nDay khong phai la so Armstrong");
	}
}
