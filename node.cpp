#include <stdio.h>
#include <stdlib.h> 

int main (void) {
    int *m; 
   // long int a=10;
    
     
    struct node {
           int value;
           struct node *next;
                   
           } *first =NULL, *new_node;   
    
    
    (*new_node).value=10;
    new_node->value = 20;
    printf("%d", new_node->value);

    
  
    new_node->value = 10;
    new_node->next= first;
    first= new_node; 
     
    
    
    
    getchar();
    
    
    int *p, *n, num=10;
    
    p= &num;
    n=p;  //p指向物件指給n 
    
    *p= 5;
    
    *n=15;
    
    printf("%d",num );
    getchar();
    
    
    
    
    
    
    return 0;
    

    
    
}
