#include <stdio.h>
#include <stdlib.h>
#include <string.h>








int findString (const char * s0,const char *s1){
    

    
    char *s= strstr(s0, s1);

    
    
    if (s!= NULL) {
        s+=strlen(s1);
        
       // printf("here %s\n", s0);
        return 1+findString( s, s1);       
            
            
            
    }
    
    return 0;
    
}

int main(){
    
    FILE *fp = fopen("c:/Users/owner/desktop/program/in.txt","r");
    char *s1= "you";
    
    fseek(fp,0,SEEK_END);
    int size = ftell(fp);
    fseek (fp, 0, SEEK_SET);
    
    printf("here %d\n",size);    
    char s0[size];
    fread(s0,1,size,fp);
    
    printf("%s", s0);
    
  //char *s= strstr(s0, s1);
   //printf("%s\n", s);
    system("pause");
    
    if (fp!=NULL)
    printf("%d", findString(s0, s1));
    
    system("pause");
    
    char a[]= "AAA";
    
    scanf("%[^0-9]",a);
    printf("%s",a);
        scanf("%[^0-9]",a);
    printf("%s",a);
        scanf("%[^0-9]",a);
    printf("%s",a);
    system("pause");
    
    
    return 0;
    
    
}
