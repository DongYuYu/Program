#include<stdio.h>
#include<stdlib.h>




int SIZE =10;
int a,b,c,d,e;

int sizeQueue =0;




int queue[10];



int insert(int);
int order();
int swap(int, int);
int heapify(int);
int heap();
int simpInsert(int);
int print();


int initiateQueue(){
    
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    
    insert(a);
    insert(b);
    insert(c);
    insert(d);
    insert(e);
    
    
    
    
    
}


int pop (){
    
    
  //  printf("popstart:\n");
    int top = queue[1];
    queue[1]=queue[sizeQueue];
    queue[sizeQueue]=0;
    
    sizeQueue--;
    heap();
    //printf("end\n");
    
    
    
    return top;
}

int print (){
    
 int i =1;
 
 printf("Queue =");
 while (i<=sizeQueue){
       
       
       printf("%d,", queue[i]);
       i ++;
       }
       printf("\n");
       return 0;
    
    
}
int heap(){
    
 int index = sizeQueue/2;
// printf("heapindex=%d\n",index);
 int i;
 for    (i=index; i>=1; i --){
          
         // while (i>0){
        
      //  printf("heapforindex=%d\n",i);
        heapify(i);
      // printf("heapforindex=%d\n",i);
        
      //  }
        
       }
    
  //  print();
    return 0;
    
}

int heapify (int index){
    
    //printf("heapifystart:\n");
    
   // printf("heapify%d\n",index);
 
 if (queue[index]<queue[index*2]||queue[index]<queue[index*2+1])
 {
                                                                
 if (queue[index*2]<queue[index*2+1])
 {swap(index*2+1,index);
 heapify(index*2+1);
}
 else
 {
 swap(index*2,index);
 heapify(index*2);
}
 
 
                                                                
                                                                }
                                                                
return 0;
 
 
 

 
 
//1 index*2 index*2+1   
    
    
    
    
    
}

int simpInsert (int x){
    
    sizeQueue ++;
    queue[sizeQueue] =x;
    
    
    
}

int insert (int x) {
    printf("insertbegin");
    sizeQueue ++;
    queue[sizeQueue]=x;
    order();
    
    printf("insert%d",x);
    
    
}


int swap(int index1, int index2)

{   //printf("swap %d,%d\n",queue[index1],queue[index2]);
    int temp;
    
    temp=queue[index1];
    queue[index1]=queue[index2];
    queue[index2]=temp;
    
    
    return 0;
    
    
    
}
int order(){
 
 int index, temp;
 int time=1;
 index = sizeQueue;
 
 
 while(index>1) {
     if (queue[index/2]<queue[index])
     {     int i =0;
           
           temp=queue[index/2];
           queue[index/2]=queue[index];
           queue[index]=temp; 
           
           index = index/2;
           
           printf("interation%d, queue[%d]==%d\n",time,index,queue[index]); 
          
         while(i<=sizeQueue){printf("whileq =%d,",queue[i]);
         
         i++;
         
                            
                            
                            }
        
        
        
        
        
           
           time++;}                                
      else {
           
           printf("Imhere");
           break;                                      
                                             
                                             }
     
     
     
     }
    
    
    
    
}

int max()
{
    
    
    
}
int main () {
    
    queue[0]=0;
    //initiateQueue();
    
    for (;;)
    {
        scanf("%d",&a);
        
        if (a==0) { heap();
        
        
        int test =1;
        while(test<=9){
                    
                    
                    printf("test%d\n",queue[test]);
                    test++;
                    }
        
        int i =1;
        int fix = sizeQueue;
        
        printf("order:\n");
        
        while(i<=fix){ int big= pop();
        printf("%d,",big);
        i++;}
        
        
        
       // pop();
        /*
        int i=0;
        while(i<=sizeQueue){printf("size=%d\n",sizeQueue);
                            printf("heapPrint%d",queue[i]);
        
         i++;
                  
                  
        
        
        
        }*/
        }
        else {//insert(a);
             simpInsert(a);
            int i=0;
            printf("size==%d",sizeQueue);
            //printf("I");
            
            /*
            for ( i=0; i++; i<sizeQueue)
            {   //break;
                printf("here");
                
                printf("print%d",queue[i]);}
    
        
        
        }
        
        */
         while(i<=sizeQueue){printf("print%d",queue[i]);
         
         i++;
         
                            
                            
                            }
        
        
        }
    
}

    return 0;
    
    
    
    
}


