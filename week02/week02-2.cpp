///要認識float 浮點數(float point number)
#include <stdio.h>
int main()
{
    float pi=3.1415926535897932338462643383279;
    double pi2=3.1415926535897932338462643383279;
    printf("float %f\n",pi);
    printf("double %f\n",pi2);
    printf("float 10位:%10f\n",pi);
    printf("float 10位:%10f\n",pi2);
    printf("float 10位:%20.18f\n",pi);
    printf("float 10位:%20.18f\n",pi2);
}
///輸出
///float 3.141593
///double 3.141593
///float  10位: 3.141593
///double 10位: 3.141593
///float  10位: 3.141592741023683200
///double 10位: 3.141592741023683200
