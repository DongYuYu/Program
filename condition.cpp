#include<stdio.h>


int main () {

int i;
int s=5;
scanf("%d",&s);

if (s==1) printf("1,");

if (s==2) printf("1,2,");

if (s>2){

  int x=1,y=0,z;
  
  printf("1, ");

  for (i=1;i<s;i++)


  {   z=y;
      y=x;
      x=y+z;
  

  printf("%d, ",x);
  }



}
    
 scanf("%d",&s);
    
 return 0;   
 
    
}
