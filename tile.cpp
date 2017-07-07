#include<stdio.h>



int TileN (int, int, int, int);




int Max (int, int);



int main (){
    
    int a,b,c,d;
    
    while (scanf("%d%d%d%d", &a,&b,&c,&d)!=EOF){
          
          printf("%d",TileN(a,b,c,d));
          
          
          
          }
    
    
    
    
    
    
}
int TileN (int rl, int rw, int tl, int tw){
    
    
    int s1 = (rl/tl)*(rw/rw);
       
    int s2 = (rl/tw)*(rw/tl);
    
    
    return Max(s1,s2);
    
    
    
    
    
    
    
    
}

int Max (int s1, int s2){
    if (s1>s2) return s1;
    
    else return s2;
    
    
    
}
