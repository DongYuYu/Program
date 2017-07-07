#include<stdio.h>
#include<stdlib.h>
int mysum(int x1, int x2);
int mysum(int x1,int x2)
{
    return x1+x2;    
}


int main()
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    printf("%d              %d\n",a,b);
    c=mysum(a,b);
    printf("sum = %d\n",c);
    printf("hello world");
    system("PAUSE");
    return 0;
}


