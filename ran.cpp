#include<stdlib.h>
#include<stdio.h>
#include<time.h>



int main (){
    
    int a =  time(0);
    printf("%d", a);
    srand(time(0));
    int i;
    for (i=0; i<51; i++)
    printf("%d\n",rand());
    
    
    int b=1;
    for (i=0; i<32; i++)
    b*=2;
    
    printf("%u\n",b);
    
    
    
    
    system("pause");   
    
    
    
    
    
    
    
    
    
}
