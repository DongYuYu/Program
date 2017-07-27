#include <stdio.h>
#include<stdlib.h>
#include<time.h>


//int *temp= (int *)malloc(sizeof(int)*(10));

void merge(int *a,int L,int m,int R){

//if (m==8) printf("runs here\n");
int *temp= (int *)malloc(sizeof(int)*(R-L+1));

//int temp[R-L+1]={0};
//printf("merge%d, %d\n", L, R);  
int *temp1 = a+L;

int *temp2 = a+m+1;

for (int i=L; i<=R; i++){
    
if (temp1>a+m){ temp[i-L]=*temp2;    //temp1 runs out of bound
//printf("temp[%d]:%d\n", i, temp[i-L]);
                temp2 ++;}
else if (temp2>a+R) {temp[i-L]=*temp1;
//printf("temp[%d]:%d\n", i, temp[i-L]);
                    temp1++;}

else if ( *temp1>=*temp2) {
     
     temp[i-L]=*temp2;
     temp2+=1;
     
  //   printf("temp[%d]:%d\n", i, temp[i-L]);
     }
else{
     
     temp[i-L]=*temp1;
     temp1+=1;
    // printf("temp[%d]:%d\n", i, temp[i-L]);
     
     }
     
}

for (int i=L;i<=R;i++)
a[i]=temp[i-L];

//printf("helfdone%d %d\n",L,R);
free(temp);
//system("pause");


//printf("Done%d %d\n", L,R);
}

void mergesort(int * a, int L, int R){
//printf("mergesort %d, %d\n", L,R);
if (L==R) return;
int m = (L+R)/2;
mergesort (a, L, m);
mergesort (a, m+1, R);
merge(a,L,m,R);
return ;
    
    
    
    
}


     
     
     
int main (){
    
    int n= 23;
  //  int a[]={1,3,5,7,9,23,5,0,12,13};
      //  int a[]={1,3,5,7,9,23,5};
    srand(time(0));
    int a[n];
    
    for (int i =0; i<n; i++)
    a[i]=rand()%230;
    
  
  
  
  
    for (int i=0; i<n;i++)
    printf("%d\n",a[i]);
         system("pause");
    mergesort(a,0,n-1);
    
    for (int i=0; i<n;i++)
    printf("%d\n",a[i]);
    
    system("pause");
    
    
}
