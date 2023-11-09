#include <stdio.h>
int main(){
	int year,month,day;
	printf("year va month va day:");
	scanf("%d %d %d",&year,&month,&day);
	if(year<1){
		printf("nam khong hop le\n");
	}else{
		printf("nam hop le\n");
	}
	if(month<1 && month>12){
		printf("thang khong hop le\n");
	}else{
		printf("thag hop le\n");
	}
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		if(day<1 && day>31){
			printf("ngay khong hop le\n");
		}else{
			printf("ngay hop le\n");
		}
	if(month==2){
		if(year%4==0 && year%100!=0){
			if(day<1 && day>29){
				printf("ngay khong hop le\n");
			}else{
				printf("ngay hop le\n");
			}
		}else if(day<1 && day>28){
			printf("ngay khong hop le\n");
		}else{
			printf("ngay hop le\n");
		}
		}
	}else if(day<1 && day>30){
		printf("ngay khong hop le\n");
	}else{
		printf("ngay hop le\n");
	}
	}
