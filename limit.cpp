#include <stdio.h>
#include <stdlib.h>
#include <limits.h>




int main () {
    
 //int a = INT_MAX; 
 
  unsigned int a=UCHAR_MAX;
  
  float k = 1.623f;
  unsigned char *p=   (unsigned char *)&k;
  int i;
  for (i=sizeof(k)-1; i>=0; i--)
  
  printf ("%02X", *(p+i));
  
  printf("\n");
  
  
  /*
  do {
      printf("%d\n", a);
      
      a++;
      
      
      
      
      }  while (a!=0);
*/    
  printf("%d", a );
  system("pause");
  
  return 0;  
    
}
