#include <stdio.h>
#include <stdlib.h>



void printBit (unsigned int);
int setBit(int, int);
int checkone (int n){
    
    int c1=0;
 while (   (n&1)==1){
       
       
       c1++; n>>1;  
          
          
          
          
          }
    
    return 0;
    
}
int main(){
    
    unsigned int k,t ;
    
    int s = sizeof (unsigned int);
    unsigned int pow = 1<<(s*8-1);
    printBit(pow);
    
    
    while (scanf("%d",&k)!=EOF){
          
          printBit(k);
          
          scanf("%d", &t);
          printf("%d\n", setBit(k,t));
          printBit(setBit (k,t));
          
          
          checkone(k);       
          
          
          }
    
    return 0;
    
}


void printBit (unsigned int n){
     
     int s = sizeof (unsigned int);
     unsigned int pow = 1<<(s*8-1);
     //printf("%d\n",pow);
     
while (pow){
      
 int a=((n &pow)?1:0);
 
 printf("%u", a);
 
// n>>=1;    
// n<<=1; 
 
 pow>>=1;
 if(pow==0) printf("\n");
 
 //printf("rn=%d\n",n); 
 //printf("power=%d\n",pow); 
      
      
}     
}

int setBit (int i, int j){
    
 int p = 1<<j;
 
 return i|p;
 
    
    
    
    
}
     
          
