#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <memory.h>



int main (){

/*
size_t n;    
scanf("%Iu", &n);

char *p1 = (char*)malloc (sizeof(char)*n);
char *p2 = (char*)malloc (sizeof(char)*n);
char *temp =(char*) malloc (sizeof (char)*n);

size_t n1 =(n>>1); 

scanf ("%s", p1);
scanf ("%s", p2);

if ((n&1)==0){
            
            printf("here");
memcpy(temp, p1, n);
char * mc = (char *)memcpy(p1+n1, p2+n1, n1);
//printf ("%d\n",memcmp(mc, p1+n1, n1));
//printf ("%d\n %d", mc, p1+n1);

printf ("%s", mc);
memcpy(p2+n1, temp+n1, n1);
}

else{
    memcpy(temp, p1, n);
   printf("%s", (char *)memcpy(p1+n1+1, p2+n1+1, n1));
   
    memcpy(p2+n1+1, temp+n1+1, n1);
     
     
     }
printf("%s %s", p1, p2
);
*/

char s1[] = "Hello!";
char s2[] ={'H','e','l','l','o','!','\0'};
int i;
//for (i =0; i<7;i++)
printf("ture? %d",memcmp (s1,s2,7));
printf ("%d\n %d", s1, s2);





system("pause");
return 0;



}

