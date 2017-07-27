
#include <stdlib.h>
#include <stdio.h>



struct Node {
    int value;
    Node * next;       
       
       
       
};


Node * newNode (int value, Node ** next){
     

  
Node * p = (Node *)malloc ( sizeof(Node));

p->value = value;
p->next = *next;

*next = p;


//Node p = {value, next};




return p;
        
        
        
}

void printN (Node * node){
     
     
     Node * t = node;
     while (t!= NULL)
     {printf ("%d\n", t->value);
     t= t->next;
     }
     }
     
Node * deleteN (Node ** node){
     
    
    while ( *node!=NULL)
    {
        Node * t= *node;
        *node= (*node)->next;  
        free (t);
          }
          
    return *node;
     
     
}

void Remove(Node *na, Node *nb){
     
     
     
     
     na->next=nb->next;
     free (nb);
     
     
     
     }
     
Node * findPN(Node * , int );

void deleten (Node**,Node *);


     
Node * remove (Node ** nodeH, Node *n, int k){
     
     Node * t = findPN (n, k);
     Node * temp =NULL;
     
     if (t!=NULL)
     temp = t->next->next;
     else {temp = n->next;
    // printf("here");
     }
     
     
     
     deleten (nodeH,t);
     
     return temp;
     
     
     
     
     
}
Node * Insert (Node* na, Node * nb, Node *nnew){
     
     na->next = nnew;
     nnew->next = nb;
     
     return nnew;
     
     
     
     
     }



void deleten (Node ** nodeH,Node * node){
     
/*     Node * temp = *node;
     *node = (*node)->next;
     
     free (temp);
     
*/   
     if (node ==NULL){
              
              Node * temp = *nodeH;
              
              *nodeH = (*nodeH)->next;
              
              free (temp);
              
              
              
              }
     else {
     Node * temp = node ->next;  
     node ->next = (node->next)->next;
     free (temp);
     
     }
     }
     
     
Node * findN(Node * node, int t){
     
     
    while (node!=NULL)
    if (node->value == t) return node;
    else node = node ->next;
    
    
    return node;     
     
     
     
}


void plusone(Node * node){
     
    printf("&node: %d", &node); 
     
 
 
     }

Node * findPN(Node * node, int t){
     
    Node * nodeP = NULL;
    while (node!=NULL)
    if (node->value == t) return nodeP;
    else {
         nodeP = node;
         node = node ->next;
}
    
    return nodeP;     
     
     
}

int main (){
    
    
    Node * nodeH= NULL;
  //  printf("%d\n", nodeH);
   // nodeH = newNode (5, nodeH);
   
    for (int i =10; i >0; i--)
    newNode (i, &nodeH);
    //newNode (4, &nodeH);
    
    printf ("%d\n", nodeH);
    
    printN (nodeH);
    
    //printf("add: %d\n", findN(nodeH, 1));
    
    remove (&nodeH,nodeH, 1);
    printN (nodeH);
    newNode (23, &nodeH);
    //temp= temp->next;
    //temp->value = 5;
    
    //Node * d = findPN(nodeH, 5);
    //deleten (d);
    
  
    
    printN (nodeH);
    
    //deleteN(&nodeH);
    //if (nodeH==NULL) printf ("deleted\n");
    
    printf("after: %d\n", nodeH);
    
    
    
   // Node * t = nodeH;
   
   
    Node ** ppn= &nodeH;
   // Node *** add=NULL;
    
    printf ("&nodeH: %d\n", &nodeH);
   // plusone(add,nodeH);
    printf ("nodeH+1: %d\n", nodeH);
   // test(ppn);
    system("pause");
    
    
    return 0;
    
    
    
    
    
    
    
    
}
