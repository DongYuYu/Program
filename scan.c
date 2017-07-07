#include <stdio.h>
#include <stdlib.h>


int main () {
    
 int a;
 
 //int digit(int);
 
    while (scanf("%d",&a)!=EOF){


     digit(a); 
      
      }
    
    return 0;
    
    
    
    
    
    
    
    
    
}

int digit (int a){
int b ,c, d, s=0;
 
 //int n = scanf("%d%d%d",&a, &b, &c);


  do 
    
  { b= a%10    ;
   
   printf("%d+",b);
   
   a/=10;
   
   s+=b;
   
   if (a==0)
   
   printf ("=%d", s);
}while (a!=0);
   
return s;

}




