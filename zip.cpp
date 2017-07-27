#include<stdio.h>



int compressed (FILE *fp, FILE *cfp){
    
    
    int count;
    
    char a =fgetc(fp);
    fputc(a,cfp);
    while(!feof(fp)){
    count=1;                 
    
    char b =fgetc(fp);
    while (b==a)
    { count++;
      b=fgetc(fp);
          }
    a=b;      
          
    fputc(count,cfp);       
          }

    
    return 0;
    
    
}
int main (){
    
    FILE *fp = fopen("c:/users/owner/desktop/program/smile.bmp","r");
    FILE *cfp = fopen ("c:/users/owner/desktop/program/com.k","w");
    compressed (fp,cfp);
    
    printf("%d",fp);
    getchar();
    
    return 0;
    
    
    
    
    
    
    
}
