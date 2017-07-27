#include<stdio.h>
#include<stdlib.h>



void print(char k[]){
     int i;
     for (i=0; i< sizeof(k); i++)
     
     printf("%c",k[i]);
     
     printf ("v=%d\n", sizeof(k));
     }

void swap (void *pa, void *pb, int n){
int i;    
 char *ca = (char *)pa;
 char *cb = (char *)pb;
 
 for (i=0; i<n; i++)
   {char t = *(ca+i);
   *(ca+i)=*(cb+i);
   *(cb+i)= t;
}


//printf ("sw %d,%d", *(int*)pa, *(int*)pb);
   
   
   
   
    
 //int t = *pa;
 //*pa = *pb;
 //*pb = t;   
    
    
}

int maxA (int *p, int n){
 
 int a = *p, i;   
 for (i=0; i<n; i++)
 if (a<*(p+i)) a = *(p+i);
 
 return a;
    
    
    
}

int minA (int a[5]){
    int i;
 for (i=0; i<5; i++)
 
 printf("%d", a[i]);   
    
    
    
}

int main (){
 
 
 int a =5, b = 10, i=0; 
 
 double d=0,e = 23, f=23;

 
 int u[5]={1,2,3,4,10};
 //printf("array= %d\n", maxA(u,5));
 
 
 
 
 double *p= &d, *t=&e, *g;
 
   // *(&(t+1)) = &f;
    
  //  *p= 51;
  
  *(t+1) = 23.0;  
 
 printf ("&t=%d\n", &t);
  printf ("t=%d\n", t);
  
//  double **k = &(t+1);
  //  g= t+1;
  
  printf("sizeoft= %d\n", sizeof(*t));
  //printf("sizeoft= %d\n", sizeof(a));
  
  
  printf("&t+1=%d\n", &t+1);
  printf ("&(t+1)=%d\n", &g);
    printf ("&(t+1)=%d\n",t+1);

  int k =23;
  
  //*(k)= 10;
 
 //*(p+2) = e;  // p+sizeof(*p)*2
 
// *(&f+1)= 230;
 
 
 
// printf("f=%d\n", &f);
// int kt =5;
  // printf("p=%d\n",&d);
 // printf("p=%d\n",&d+kt);
 
 
//  printf("p=%d\n",p);
 // printf("d=%f\n",d);
  // printf("f=%f\n",f);
  
 
 //printf("p=%d\n",&p);
 // printf("p=%d\n",&p+1);
 
 //for (i=-128; i<1000; i++)
 
 //printf("%c\t", i);
double a1= 0.5, a2=0.7;
 
 //print(str);
 swap (&a1, &a2, 8);
 //int *p;
// p = &a;
 
// minA (u);
 printf("%f, %f  \n", a1, a2);
 
 system("pause");
 
 return 0;
    
    
    
    
    
    
}
