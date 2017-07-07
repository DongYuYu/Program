#include <stdio.h>
#include <stdlib.h>

//define ROW 5
//define CO 5

//void fun(int b, int a[b]){
     
  //   int x=b;
  // int 
  //   int i;
  //   for(i=0;i<b;i++)
  //   int a[i]=1;
  //   printf("a[b]\n");
     
     
  //   }
int multi(int a, int b)

{return a*b;}

int main(void){
    
 int a[5][5];
 int c[5];
 int i, j, t; 
 
 for (i=0; i<5; i++)
 
     for(j=0; j<5; j++)
      
       if(j==i)
       a[i][j]=1;
       else
       a[i][j]=0;   
    
 
 
 for (i=0;i<5;i++)
 
    { for(j=0;j<5;j++)
     printf("%5d",a[i][j]);
     printf("\n");}
    
    
    printf("%d", multi(i,j));
    int m;
    scanf("%d",&m); 
    int b[m];
    
    printf("%u",sizeof(b));

    
    return 0;
}
