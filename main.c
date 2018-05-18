#include <stdio.h>  //函數庫 
#include <stdlib.h> //函數庫 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int integer1; //整數1 
	int integer2; //整數2 
	int sum;      //總和 
	
	printf("Enter first integer\n"); //列印出第一輸入數 
	scanf("%d",&integer1);           //輸入第一輸入數
	
	printf("Enter second integer\n");//列印出第二輸入數 
	scanf("%d",&integer2);           //輸入第二輸入數  
	
	sum = integer1 + integer2;       //兩數相加 
	
	printf("Sum is %d\n",sum);       //列印出總和值 
}
