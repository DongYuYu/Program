#include <stdio.h>


int fa( int n, int f1[]);
int main (){
int n, i;    
 while (scanf("%d", &n)!= EOF)
{ 
 int f1[n];
 
 for (i=0; i<n; i++)
 f1[n]=-1;
 
 
 printf("%d",fa(n, f1));
 
  }  
    
    return 0;
    
}


int fa( int n, int f1[]) {
    
    
    if (f1[n]!= -1)
    
    return f1[n];
    
    else
    
    return f1[n]= fa(n-1,f1)+fa(n-2,f1);
    
    
    
}
