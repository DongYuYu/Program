#include <stdio.h>
#include <math.h>
#include <stdlib.h>



double mean (float a[]){
       
       
       int sum =0, i;
       int b= sizeof(a); 
       printf("%d\n",b);      
       for (i=0; i<b; i++)
       {sum += a[i];
       //printf("%d\n",a[i]);
       
       }
       printf ("sum=%d\n", sum);
       double n = b;
       
       
       printf("av=%f\n",sum/n);
       return sum/n;
       
       
       
       }


double sigma (float a[]){
int b =sizeof(a); 
int i;      
double avg =  mean(a), sum=0;
for (i=0;i <b; i++)
sum += (a[i]-avg)*(a[i]-avg);

double n = b;

return sqrt(sum/n);

       
       
       
       
       
       
}

int main (){
 
 
 const int n=5;
 //int n;
 //while (scanf("%d", &n)!=EOF){   
 float a[n];
 int i;
 for (i=0; i<n; i++){
     
     scanf("%d",&a[i]);
     
     //printf("%d\n", i); 
     
     
     }
    
    
 printf("srtt= %f\n",sigma(a));


//} 
 system("pause");
 
 return 0;
 
 
    
    
    
}
