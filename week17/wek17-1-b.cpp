///week17-1-b
#include <stdio.h>
int main()
{
	char s[200];
	scanf("%s",s);
	for(int i=0;s[i]!=0;i++){
		if(s[i]!='2')printf("%c",s[i]);
	}
	printf("\n");
}
