#include <stdio.h>
int main()
{
	int i,j,n,m;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++){
 		for(j=n;j<=m;j++){
			printf("%2dx%2d=%2d  ",i,j,i*j);
			}
		printf("\n");
	}
}