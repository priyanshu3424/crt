#include<stdio.h>
void main()
{
    int a=32111;
    char *p1= &a;
    int *p2 =&a;
    
    printf("Res 1 = %d\n", *p1);
    printf("Res 2 =%d", *p2);

}
