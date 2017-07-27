#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int cmpW (const void *, const void *);
int cmpSW (const void *, const void *);
int ran (int i){
    
    return (rand()%i);
    
    
    
}
struct Student{
char name[8];
int h, w;  };

int main (){



int n;
scanf("%d", &n);

srand(time(0));


//int k2 =300;


//int A[5][2]={{179, 91}, {165, 52}, {175, 51}, {179 ,80}, {175, 91}};
int i;
//for (i =0; i <5; i++)
//scanf ("%d %d", &A[i][0], &A[i][1]);

//int (*pv)[2]= (int (*)[2])calloc(n, sizeof(int)*2);

Student * ps= (Student *)malloc (sizeof(Student)*n);


/*
for (i=0; i<n;i++)
{//pv[i][0]= ran(230);
(*(pv+i))[0]= ran(230);
pv[i][1]= ran (108);
}


//printf("%d\n",*(*(pv)+1));
//printf("%d\n",pv+1);
qsort(pv, n, sizeof(int)*2, cmpW); 
// for (i=0; i<5; i++)
// printf ("(%d, %d)", A[i][0], A[i][1]);
 
 for (i=0; i<n; i++)
 printf ("(%d, %d)", pv[i][0], pv[i][1]);
 
 printf("\n");
 
 */
 
 for (i=0; i<n;i++)
{//pv[i][0]= ran(230);
(ps+i)->h= ran(230);
(ps+i)->w= ran (108);
}

  for (i=0; i<n; i++)
 printf ("(%d, %d)", (ps+i)->h, (ps+i)->w);
  printf ("\n");

qsort(ps, n, sizeof(Student), cmpSW); 
 
// int c[2]= {0,1};
 
// printf ("%d\n", (c)[1]);
// printf ("%d\n", *(c+1));
 
  for (i=0; i<n; i++)
 printf ("(%d, %d)", (ps+i)->h, (ps+i)->w);
 
 
 printf ("\n");
 
 
 
 //int (* cp);
 
 //int[2] (* cp);
/* 
 int p[2];
 
 int * cp;
 
 //cp = &p;
 
 int c1[2][2] ={{0,1},{1,0}};
 
 //cp =c1;
 
 int p1[3][2];
 
 //int * cp1[2];
 
 int (*cp1)[2];
 
 //cp1[0]=p;
 
cp1 = (int (*)[2])calloc(3,sizeof(int)*2);
 
 
 
  printf("%d\n", c1+1);
  printf("%d\n", (*(c1+1)+1));
 printf("%d\n", **c1);
 
// int *cp1;
 
// int (*cp3)[2];
 
// int (* cp1)= c1;;
 //int * c3;
 //int c2[2]=0
 
 int (* c2)[2] =0;
 */
 
 printf ("test\n");
 
 int *cp1 [5];
 int (*cp2) [5];
 int k = 10;
 
 cp1[0]= &k;
 //cp1[1]= &k2;
 
  printf ("%d\n", **(cp1));
   printf ("%d\n", *(cp1+1));
 
 for (i=0; i<5; i++)
 
 printf ("%d\n", cp1+i);
 
 printf ("\n");
 
 /*for (i=0; i<5; i++)
 
 printf ("%d\n", cp2+i);
 
 printf ("\n");
 */
 
 for (i =0; i<20;i++)
 
 printf ("%d\n", 20);
 
 printf ("\n");
 
system("pause");
}

int cmpW (const void * p1, const void * p2){
 int * cp1 = (int *) p1; 
 int * cp2 = (int * ) p2;
 

 
 return cp1[1]-cp2[1];
    
    
}

int cmpSW (const void * p1, const void * p2){
const Student * cp1 = (const Student *) p1; 
const Student * cp2 = (const Student * ) p2;
 

 
 return cp1->w-cp2->w;
    
    
}


 
    
    
    
    
       
