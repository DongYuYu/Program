#include<stdio.h>

int check(int[],int,int);
int stop;
int main(){
    
    int tar;
    
 while (scanf("%d",&tar)!=EOF){
       stop=0;
       int i,k=-1, temp = tar, temp2=tar;
           
       while (temp!=0){
             temp /=10;
             k++;
             
             }
       
       printf("k=%d\n",k);
       int a[k+1];      
       
       for (i=0;i<k+1;i++)
       {a[i]=temp2%10;
       printf("%d\n",a[i]);
       temp2/=10;
       
       
       }
       
      // printf("fine");
       
       printf("%d",check (a, 0, k));
       
       printf("st=%d",stop);
       
       
       }   
    
    
    
    
    
    
    
    return 0;
    
}






int check (int a[], int s, int e){
    
if (stop==1) return 0;    
else if (s+1==e) return a[s]+a[e];
else if (s==e) return a[s];
 
 else {
 
 int d = (s+e)/2;
 
 int c1=check (a, s, d);
 int c2=check (a, d+1, e);
 
 
 
int j1 = a[d-1]+a[d]; 
int j2 = a[d]+a[d+1];
int j3 = -1;

if (d+2<=e)
j3 = a[d+1]+a[d+2];
else
j3 = j2;


if (stop==0&&j1==j2&&j2==j3)
return j1;

else {
     
     
     stop =1;
     printf("sto=%d\n",stop);
     return 0;}
 
      
      }
      
      
      
      
      
}
