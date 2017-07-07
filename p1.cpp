#include <stdio.h>


int main() {
    
    char a='a';
    int d=100;
    printf ("%d",a);
    
    unsigned int sum=0, amount;
    
    for(;;){
    printf("please enter the budget:(enter 0 for quit)");
    scanf("%d",&amount);
    if(amount !=0)
    {sum+=amount;
    printf("the current sum is %5.2d\n",sum);}
    else break;}
    printf("Thank you for using the app!");
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
