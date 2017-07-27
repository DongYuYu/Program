#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void swap (void *, void *, int);
void sort (int *a, int n){
 if (n==0) return;    
 int i;
 for (i=0; i<n-1; i++)
   if (*(a+i)>*(a+i+1)) swap(a+i, a+i+1, 4);
   
   sort (a, n-1);
     
     
}


int search(void *a, int b, int e, void * t, int s)
{
int *ia, *it;

if (s ==4) { ia = (int *)a;
             it =  (int *)t;}
        
 int k = (b+e)/2 ; 
 
 if (b==e&&*(ia+k)!=*it) return -1;
 //if (b==e && *(a+k)!=t) return -1; 
 //else if (*(a+k)==t) return (k+3);
 //else if (*(a+k)>t) search (a, b, k, t);
 //else  search (a, k+1,e, t);
 
 if (*(ia+k)>*(it))  return search (a, b, k, t, s);
 else if (*(ia+k)<*(it))   return search (a, k+1,e, t, s);
 else return k;
    
 
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
}
    

void print(int *a, int n)
{    int i;
     for (i=0; i<n;i++)
     printf ("%d ", *(a+i));
     
     
     printf("\n");
     
     
     
     }
     
void printSum(int *a, int n)
{    int i, sum=0;
     for (i=0; i<n;i++)
    // printf ("%d ", *(a+i));
    sum+= *(a+i);
     
     
     printf("Sum=%d\n", sum);
     
     
     
     }
     
void printSum2(int a[23])
{    int i, sum=0;
     for (i=0; i<23;i++)
    // printf ("%d ", *(a+i));
    sum+= *(a+i);
     
     
     printf("Sum=%d\n", sum);
     
     
     
     }
     
     
int Sum(int *a, int n)
{    int i, sum=0;
     for (i=0; i<n;i++)
    // printf ("%d ", *(a+i));
    sum+= *(a+i);
     
     
    // printf("Sum=%d\n", sum);
     return sum;
     
     
     }

int test (int a){
 if (a==5) return 0;   
    
    
    
}

int test2 (int a){
    
    if (a==3) return 0;  
}

int lessN( const void *pa, const void *pb){
 return *(int *)pa-*(int *)pb;   
    
    
}

double average (int *a, int (*sum)(int *, int ), int n){
    return sum(a,n)/(double)n;
    
    
    
}


int main (){
    
 const int n =23;
 int a[n], b[n];
 srand(time(0));
 
 
 
 int i;
 for (i=0; i<n; i++)
 a[i]=(rand()%23);
// a[i]=i;

 for (i=0; i<n; i++)
 b[i]=(rand()%23);
 print (a, n);
 sort(a, n);   
 
 print(a, n);
 int c[n];
 for (i=0; i<23;i++)
 
 {   c[i]=i;
     printf ("serach%d result%d\n", i,search (a, 0, n-1, &c[i], 4));
 
}
 printf("test %d\n", test(1));
  printf("test %d\n", test2(1));
  
  
  
  void (*fun)(int *,int);
  fun = print;
  
  fun (a, 23);
  
  fun = &printSum;
  
  fun (a, 23);
  
   print (b, n);
   int (*fp)( const void *, const void *) = &lessN;
   qsort (b, n, 4, fp);
   
   int (*fun2)(int *, int) = Sum;
   printf ("avg=%f\n",average(b, fun2, n)); 
   
   print (b, n);
  
  printf("%d\n", sizeof(fun));
  printSum2(&a[0]);
  
  
 system("pause");
 return 0;
    
    
    
}  
