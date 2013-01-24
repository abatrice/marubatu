#include<stdio.h>

void main(void){
	int a,c,e,z;
	char* d;
	char* b[10];
	for(a=1;a<=9;a++){
		b[a]=" ";
	}
	d = "O";
	e = 0;
	z = 0;
for(c=1;c<=10;c++){
for(a=1;a<=9;a++){
	printf("%s",b[a]);
	if(a!=3||6||9){
		printf("｜");
	}
	if(a==3){
		printf("\n―――――\n");
	}
	if(a==6){
		printf("\n―――――\n");
	}
	if(a==9){
		printf("\n\n");
	}
}
if(c!=10){
	printf("１　２　３\n４　５　６\n７　８　９\n\n");
	if(d == "O"){
	printf("　Oの番です\n　座標:");
	scanf("%d",&a);
	printf("\n");
	if(b[a] == " "){
		b[a] = "O";
		}else{
		printf("陣取り済み、または入力値が違っています\n\n");
		c = c - 1;
		z = z + 1;
		}
	}else{
	printf("　Xの番です\n　座標:");
	scanf("%d",&a);
	printf("\n");
	if(b[a] == " "){
		b[a] = "X";
		}else{
		printf("陣取り済み、または入力値が違っています\n\n");
		c = c - 1;
		z = z + 1;
		}
	}
	}
		a=1;
	if(b[a]==d){
		if(b[a+1]==d){
			if(b[a+2]==d){
				c = 10;
				e = 1;
			}
		}
		if(b[a+4]==d){
			if(b[a+8]==d){
				c = 10;
				e = 1;
			}
		}
		if(b[a+3]==d){
			if(b[a+6]==d){
				c = 10;
				e = 1;
			}
		}
	}
	if(b[a+1]==d){
		if(b[a+4]==d){
			if(b[a+7]==d){
				c = 10;
				e = 1;
			}
		}
	}
	if(b[a+2]==d){
		if(b[a+5]==d){
			if(b[a+8]==d){
				c = 10;
				e = 1;
			}
		}
		if(b[a+4]==d){
			if(b[a+6]==d){
				c = 10;
				e = 1;
			}
		}
	}
	if(b[a+3]==d){
		if(b[a+4]==d){
			if(b[a+5]==d){
				c = 10;
				e = 1;
			}
		}
	}
	if(b[a+6]==d){
		if(b[a+7]==d){
			if(b[a+8]==d){

				c = 10;
				e = 1;
			}
		}
	}
	if(d == "O"){
		if(z == 0){
		d = "X";
		}else{
			z = z - 1;
		}
	}else{
		if(z == 0){
		d = "O";
		}else{
			z = z - 1;
		}
	}
}
if(e==1){
for(a=1;a<=9;a++){
	printf("%s",b[a]);
	if(a!=3||6||9){
		printf("｜");
	}
	if(a==3){
		printf("\n―――――\n");
	}
	if(a==6){
		printf("\n―――――\n");
	}
	if(a==9){
		printf("\n\n");
	}
}
			if(d == "X"){
				printf("Oの勝ちです\n");
				c = 12;
			}else{
				printf("Xの勝ちです\n");
				c = 12;
			}
		}
	if(c <= 11){
	printf("引き分けです\n");
	}
}
