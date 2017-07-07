#include<stdio.h>
#include<stdlib.h>

float mean(int[],int);

int main(void){
    
    int a[10] ;
    
    for(int i=0;i<10;i++)
    
    {scanf("%d",&a[i]);
                        
                        
                        
    }
                      
                       
                        
    printf("%.1f",mean(a,10));
    system("PAUSE");
    
    
}   
float mean(int b[], int n)
{
    
    float sum=0;
    for (int i=0;i<n;i++)
    sum=sum+b[i];
 return   sum/n;
    
    
    
    
    
}
    
    
    
    

