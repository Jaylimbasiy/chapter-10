#include<stdio.h>

ans(){

     int a;
     printf("A : ");
     scanf("%d",&a);
     
     if(a%3==0 && a%5==0)
     {
     	printf("number is divisible");
	}
	else
	{
		printf("number is not divisible");
	}
}
main(){
	
	ans();
}
