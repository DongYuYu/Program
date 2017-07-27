#include<stdio.h>
#define W 5
#define H 5


int main (){
    
    
   // printf("%d",W*H+1);
    
    char c[W*H+1]="\
    ..###\
    #....#.###";
    
    
    int k=0;
    for (int i=0;i<H;i++){
    for (int j=0;j<W;j++)
    printf("%c",c[k++]);
    printf("\n");
}
    getchar();
    
    
    
}
