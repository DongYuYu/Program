#include<stdio.h>
#include<stdlib.h>
void sum1(int x);
void sum2(int x);
//call by value

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n",a);
    sum1(a);
    printf("sum = %d\n",a);
    printf("hello world");
    system("PAUSE");
    return 0;
}
void sum1(int x)
{
    x=x+1;     
    
    printf("%d\n",x);
}
void sum2(int x)
{
    x=x+2;
}
    
    

