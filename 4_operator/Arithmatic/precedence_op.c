//check precedence then expand
#include<stdio.h>
int main()
{
    int a=2, b=3, c=4, d=5;

    printf("a * b / c = %d\n",a*b/c);  //same precedence then left to right associative
    printf("a + b - c = %d\n",a+b-c);
    printf("a + b * d - c = %d",a+b*d-c); //priority(b*d) --> a+(b*d)-c

    return 0;

}