#include<stdio.h>
#include<stdlib.h>

void decompose(double, long *, double*);



int main(void)
{
 
    long i;
    double d;
    
    decompose(3.1419, &i, &d);
    
    printf("%ld\n%.5f\n",i,d);
    getchar();
    
    
    
       
}



void decompose(double x, long *int_part, double *frac_part)
{
     *int_part = (long)x;
     *frac_part = x - *int_part;   
     
     
     
     
     
     
}
