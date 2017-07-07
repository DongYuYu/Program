#include <stdio.h>
#include <stdlib.h>



struct node{
  int value;
  struct node *next;     
       
       
       
};


//struct node *new_node;


struct node *add_to_list(struct node *list,int new_value){// int value?
     struct node *new_node;
     new_node = (node*)malloc(sizeof(node));  //宣告這裡有什麼好處? 
     new_node->value = new_value;
     new_node->next = list;
//   list = new_node;
     return new_node;
     
     
     
     
}

struct node *search_list(struct node *list, int search_value){
    
  /*  if (list->value == search_value)
    return list;
    else if (list->next == NULL)
    {printf("cant find");
    return list;}
    else
    return search_list(list->next, search_value);
    
    */
    struct node *p;
    for(p=list; p!=NULL; p=p->next)
    {
    if (p->value == search_value)
    return p;
               
               
    }
    //printf("cant find");
    return list;
    
    
}

struct node *add_value(void){
       
       int n;
       struct node *first = NULL;
       printf("start. 0 to exit");
       for(;;)
       {scanf("%d", &n);
       if (n!=0)
       first =add_to_list(first, n);
       else
       return first;
       }
       
}

int list_delete(struct node* list, int n){
     printf("run delete");
    // struct node *first= list;
     struct node *cur, *pre;
     for (cur= list, pre=NULL; cur->value!=n && cur!=NULL ; pre=cur, cur=cur->next  )
     ;//struct node *p = search_list(list, n);
     
     if (cur== NULL)
     printf("no item found");
     getchar();
     if (pre==NULL)
     list = cur->next;
     if (cur->value==n)
     pre->next = cur->next;
     
return 0;
}

int main(void){
    
    //struct node *new_node;
    //new_node = (node*)malloc(sizeof(node));
    
    //(*new_node).value = 10;
    //new_node->value = 10;
    
    /*
    struct node *first;
    first = NULL;
    new_node->next = first;
    first = new_node;
    
    new_node = (node*)malloc(sizeof(node));
    new_node->value = 20;
    new_node->next = first;
    first = new_node;
    
    
    
    
  //  first = add_to_list(first, 10);
    */
    //struct node *first;
   // first = add_value();
   //printf("hello");
   
  //  int n = first-> value;
   // struct node *p;
    //for(p;p!=NULL;p=p.next)
    int pause;
    struct node *first = add_value();
   
    struct node *find = search_list(first, 5);
  
    
    printf("%d\n", find->value );
    printf("then delete"); 
    scanf("%d", &pause);
    list_delete(first, 2);
   // find = search_list(first, 5);
  
    scanf("%d", &pause);
    //printf("%d", find->value );
    getchar();
    
    
    
 return 0;   
}
