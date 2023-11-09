#include <stdio.h>
int main(){
	int new_number,old_number,price;
	printf("so dien moi la :");
	scanf("%d",&new_number);
	printf("so dien cu la :");
	scanf("%d",&old_number);
	if (0<=(new_number-old_number) && (new_number-old_number)<50){
		price=10000;
		printf("tien dien thang nay la:%d",(new_number-old_number)*price);
	}else if(50<=(new_number-old_number) && (new_number-old_number)<100){
		price=15000;
		printf("tien dien thang nay la:%d",(new_number-old_number)*price);
	}else if(100<=(new_number-old_number) && (new_number-old_number)<150){
		price=20000;
		printf("tien dien thang nay la:%d",(new_number-old_number)*price);
	}else if(150<=(new_number-old_number) && (new_number-old_number)<200){
		price=25000;
		printf("tien dien thang nay la:%d",(new_number-old_number)*price);
	}else{
		price=30000;
		printf("tien dien thang nay la:%d",(new_number-old_number)*price);
	}
} 
