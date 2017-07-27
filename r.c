#include<stdio.h>
#include <stdlib.h>
#define W 5
#define H 5


int loop=0;


int go(char* c, int w, int h, int a, int b){
    int layer=++loop;
    int i = b*w+a;
    
    if ( a<0 || b<0 || a>w-1 || b>h-1 ) return 0;
    
        printf("hi %d\n",i);
  /* if (c[i]=='#') return 0;
    
    else {c[i]='O';
    */

           if (c[i]=='.')  c[i]='O';
    else return 0;
    
    
    
    
 
    
    printf("(%d,%d)\n",a,b);
    system("pause");
    
   // printf("hey\n");
    
    
        if (i==24) {     printf("return 1 from layer %d\n",layer);
                   return 1;
               }
    
    if (go(c,w,h,a+1,b)) {printf("return 1 from layer %d\n",layer);
                         return 1;}
    
    
    printf("right done, loop%d\n", loop);
     if (go(c,w,h,a,b+1)) {printf("return 1 from layer %d\n",layer);
                         return 1;}
                         
     if (layer ==1) printf("oops, i think is wring. call me silly .............................................");
         
    printf("down done, loop%d\n", loop);
      if (go(c,w,h,a-1,b)) {printf("return 1 from layer %d\n",layer);
                         return 1;}
          
    printf("left done, loop%d\n", loop);
       if (go(c,w,h,a,b-1)) {printf("return 1 from layer %d\n",layer);
                         return 1;}
           

    printf("up done, loop%d\n", loop);

    printf("return from buttom: layer %d\n", layer);
    
    printf("return  from layer %d\n",layer);
    c[i]='l';
    return 0;
    
    
}

int main (){
    
    char c[W*H+1]="..####....#.####...#.#...";
    
    int k=0, i ,j;
    for (i=0;i<H;i++){
    for (j=0;j<W;j++)
    printf("%c",c[k++]);
    printf("\n");
}

   printf("\n");
      printf("\n");
    k=0;
    go(c,W,H,0,0);
    
    for (i=0;i<H;i++){
    for (j=0;j<W;j++)
    printf("%c",c[k++]);
    printf("\n");
}

    
    getchar();
    
    return 0;
    
}


