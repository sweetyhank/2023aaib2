#include <stdio.h>
int func(int n)
{
	if(n==1) return 1;
	return n* func(n-1);
}
int main()
{
	printf("請輸入N:");
	int N;
	SCANF("%d", &N);
	int ans = func(N);
	printf("%d",ans);
	
}