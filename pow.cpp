
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>




int Pow (int x, int y){
    
 if (y==0) return 1;   
 else if (y&1) return  x * Pow (x, y-1); 
 else return Pow(x, y>>1)*Pow(x,y>>1); 
    
    
    
}

int main(){


int a, b;
while (scanf("%d%d", &a, &b)!=EOF){
      
      
     // clock_t t0, t1;
     // t0= clock();
      printf("%d\n",Pow(a,b));
      
     // t1= clock();
      
   //   char s1[]="HilHi";
     // char s2[]="Hi";
      
    //  char *s = strstr(s1,s2);
    //  char *ss = strstr (s1+strlen(s2), s2);
      
      printf("%s", s);
       printf("%s", ss);
      
 //     printf("%d\n", t1-t0/CLOCK_PER_SEC);
      system("pause");
      }
      

    
    return 0;
    
    
}
