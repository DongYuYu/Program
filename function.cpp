#include <stdio.h>

int main()

{int prime(int);
 int a;
    
 while (scanf("%d", &a)!=EOF){
       
       
       
       printf("%d",prime(a));
       
       }   
       
       return 0;
    
    
}




int prime (int n){
 int i=0;   
while (i*i<=n)
i++;

 
 int k=i-1;
// printf("%d", k);
 
 for (i=2; i<=k; i++)
 {if (n% i ==0) return 1;
 //if (i==k) return 0;
 
 }
 
 
 
 return 0;
 
    
    
    
}
