#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int sum (int *a, int n){
    int i, sum=0;
  for (i=0; i<n; i++)
  sum += *(a+i);
  
  
  return sum;
  
}


int square (int b){
    
 return b*b;   
    
}

double varSqua (int *a, int n , int (*squ) (int)){
    int i;
    int b[5];
    for (i=0; i<n; i++)
    b[i]= (*squ)( a[i]-sum(a,n)/n);
    
    
    return sqrt((*sum)(b,n));
    
    
    
    
    
}



int main (){

 double b= 10.0;
 void *p = &b;
 
 printf("%d\n", *((int *)p+1));
  printf("%f\n", *((double *)p+1));
 
// p= &b;
 
 
 //void (*f)(int);
 //f= &square;   
 int a[5]={1,2,3,4,5};
 
 printf("%d\n",varSqua(a,5, &square));   
    system("pause");
    
    
}
