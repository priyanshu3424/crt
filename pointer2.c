#include<stdio.h>
void main(){
    short int num =895;
    char *p1 =&num;
    short int *p2= &num;

    printf("p1 =%u \n", p1);
    printf("p2 =%u \n", p2);
    printf("value of p1 =%d\n", *p1);
    printf("p2= %d\n", *p2);
    p1++;
    printf("p1=%d",*p1);

    


}