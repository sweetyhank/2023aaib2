#include <stdio.h>
int myFuncA()
{
    int x = 299;
    printf("myFuncA()¸Ìªºx¬O%d\n", x);
}
int main()
{
    int x = 100;
    printf("main()¸Ìªºx¬O%d\n", x);
    myFuncA();
    printf("main()¸Ìªºx¬O%d\n", x);
}
