#include <stdio.h>  //��Ʈw 
#include <stdlib.h> //��Ʈw 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int integer1; //���1 
	int integer2; //���2 
	int sum;      //�`�M 
	
	printf("Enter first integer\n"); //�C�L�X�Ĥ@��J�� 
	scanf("%d",&integer1);           //��J�Ĥ@��J��
	
	printf("Enter second integer\n");//�C�L�X�ĤG��J�� 
	scanf("%d",&integer2);           //��J�ĤG��J��  
	
	sum = integer1 + integer2;       //��Ƭۥ[ 
	
	printf("Sum is %d\n",sum);       //�C�L�X�`�M�� 
}
