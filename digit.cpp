#include <stdio.h>
#include <stdlib.h>




int main (){
    
    int a[23]={0};
    unsigned int b;
    while (scanf("%u", &b)!=EOF){
          
          int k=32;
          unsigned int digit = 1<<(sizeof(b)*8-1);
          
        //  printf("%u", digit);
          
          //printf ("and %d\n", b&digit);
          
          while ((b&digit)==0)
          {k--;
          digit>>=1;
          //printf("%d\n", b&digit);
          
          }
          
         //printf("here %d\n",k);
          
          //const int t = k;
          char c[k];
          
          
          int i=0;
          unsigned int f=b;
          
          while (f!=0)
          
          
          {
          c[i++]=f&1;
          f/=2;
          //printf("la\n");
          
          }
          printf("siz =%d\n", sizeof(c));
          for (i=sizeof(c)/sizeof(c[0]); i>0; i--)
          printf("%d", c[i-1]);
          
          printf("\n");
          unsigned int p;
          i=0;
          
          while (b!=0)
          {
          if (b&1) i++;
          b>>=1;
          }
          
          printf("%d\n",i);

          
          
          }
          
          system("pause");
    
    
    return 0;
    
    
    
}
