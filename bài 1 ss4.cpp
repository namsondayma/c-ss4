#include <stdio.h>
int main(){
	int number;
	printf("nhap so nguyen la:");
	scanf("%d",&number);
	if (number%3==0 && number%5==0){
		printf("%d co the chia het cho ca 3 va 5\n",number); 
	} else {
		printf("%d khong the chia het cho ca 3 va 5",number);
	} 
} 
