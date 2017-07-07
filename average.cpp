#include <stdio.h>
#include <stdlib.h>
float ave(int x1, int x2, int x3);

int main(){

   int a, b, c;
   double d;
   scanf ("%d %d %d", &a, &b, &c);
   printf ("%d %d %d\n", a, b, c);
   d = ave(a,b,c);  
   printf ("the average of a,b,c is %f\n", d);
   system ("PAUSE");

   
     
     
     
     
     
}

float ave(int x1, int x2, int x3)
{

    float a;
       a= (x1+x2+x3)/3;
       printf ("where=%f\n", a);
          return (x1+x2+x3)/3;
       
       
       
       
       
}
