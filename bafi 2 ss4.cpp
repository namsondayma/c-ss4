#include <stdio.h>
int main(){
	int edge1,edge2,edge3;
	printf("do dai cac canh lan luot la:");
	scanf("%d %d %d",&edge1,&edge2,&edge3);
	if(edge1==edge2 && edge1==edge3 && edge2==edge3){
		printf("la tam giac deu");
	}else if(edge1==edge2 || edge1==edge3 || edge2==edge3){
		printf("la tam giac can");
	}else if((edge1^2+edge2^2)==edge3^2 || (edge1^2+edge3^2)==edge2^2 || (edge2^2+edge3^2)==edge1^2){
		printf("la tam giac vuong");
	}else if((edge1==edge2 || edge1==edge3 || edge2==edge3) && ((edge1^2+edge2^2)==edge3^2 || (edge1^2+edge3^2)==edge2^2 || (edge2^2+edge3^2)==edge1^2)){
		printf("la tam giac vuong can");
	}else if((edge1+edge2)>edge3 && (edge1+edge3)>edge2 && (edge2+edge3)>edge1){
		printf("la tam giac thuong");
	}else{
		printf("khong phai tam giac");
	}
} 
