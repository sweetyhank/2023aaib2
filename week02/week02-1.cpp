#include <stdio.h>
int main()
{
	int a,b;
	printf("請輸入兩個整數:");///先印出中文，提示你輸入
	scanf("%d %d",&a,&b);///() 要加 &
	printf("你輸入了2個數字，直接加法:\n");
	printf("%5d\n",a);///印出來，格的整數，後面\n跳行
	printf("%5d\n",b);///印出來，格的整數，後面\n跳行
	printf("-----\n");///印出一堆減號，後面\跳行
	printf("%d",a+b);///印出來，格的整數，後面\n跳行
}
