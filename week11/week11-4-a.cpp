#include <stdio.h>
int main()
{
	int a[10][10];
	int m, n; //part1
	scanf("%d%d", &m,&n);
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}