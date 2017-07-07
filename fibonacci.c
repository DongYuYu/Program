#include <stdio.h>


//int fa( int n, int f1[]);
int main (){
int n, i;    
 while (scanf("%d", &n)!= EOF)
{ 
 int f1[n+1];
 f1[0]=0;
 f1[1]=1;
 
 for (i=2; i<=n; i++)
 {f1[i]=-1;
  //printf("%d,", f1[i]);} 
}
 printf("%d",fa(n, f1));
 
  }  
    
    return 0;
    
}


int fa( int n, int f1[]) {
    
    
    if (f1[n]!= -1)
    
    return f1[n];
    
    else
    
  //  if (f1[n]==-1)
    
    return f1[n]= fa(n-1,f1)+fa(n-2,f1);
    
  //  else
    
  //  return f1[n];
    
}
