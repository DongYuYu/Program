#include<stdio.h>
#include<stdlib.h>
void sum1();
void sum2();
int a;

int main()
{
    scanf("%d", &a);
    printf("%d\n",a);
    sum1();
    sum2();
    printf("sum = %d\n",a);
    printf("hello world");
    system("PAUSE");
  
}
void sum1()
{
    a=a+1;     
}
void sum2()
{
    a=a+2;
}
  
