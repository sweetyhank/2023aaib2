///week13-3
#include <stdio.h>
int main()
{
    int n;///��Ʀr���}
    scanf("%d",&n);
    int N=0;
    int a[20] = {};
    while(n>0){
        a[N++]=n%10;///int now =n%10;///�{�b��U�Ӫ��Ʀr
        ///printf("now:%d\n",now);
        n = n/10;///��ư��k,
    }
    int bad = 0;
    for(int i=0; i<N; i++){
        if(a[i]!=a[N-1-i]) bad=1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
