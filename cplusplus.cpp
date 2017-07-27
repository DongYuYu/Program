#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int & x, int & y){
     
     int t = x;
     x= y;
     y=t;
     
     
     }
int static a=10;  
     
struct test{
       int age;
       short name;
       
       
       
       
};

template <class U>
void k (U a, U b){
     U c = a+b;
     
     }
class student{
    //char name[10];
    int age, height, weight;  
    char* name;
    static int avgweight;
public:  
         
    ~student();  
    student(student &a): age(a.age), height(a.height), weight(a.weight), name(NULL){
                    
    //this->age=a.age;
    if (a.name!=NULL){
        this->name= new char[strlen(a.name)+1];
        memcpy(name, a.name,strlen(a.name)*1);
        
       name[strlen(a.name)]='\0';
      // strcpy(name,a.name);
       cout<<"hi"<<endl;              
                     
    }
    else {name = new char[10];
    memset(name,0,10); }              
                    
}
    float eat(student *, int );
    student(int _age=23, int _height=173, int _weight=91, char *  _name=NULL): age(_age),height(_height), weight(_weight) ,\
    name(NULL){
    
    if (_name!=NULL)
    {name = new char[strlen(_name)+1];
    strcpy(name,_name); 
    name[strlen(_name)]=0;  } 
    
    else {
         name = new char[10];
         memset(name,0,sizeof(char)*10);}
                            
    }
    
    char * getname(){
         
         
         return name;
         }
    
    void setage(int a){ age=a;}
   // student(int a): age(a){};
    int get_age (int a) const;
    void (*fp1)(int);
    
    //fp1= getav;
    static void setavg(int a){
         
         avgweight =a;
         
         }
    static int getav(){
     //   cout<<avgweight;
        return avgweight;
        
        }
    int operator + (student &);   
    void setna(char* a){
        
        if (name!=NULL) delete(name);
        
    if (a!=NULL)
    {name = new char[strlen(a)+1];
    strcpy(name,a); 
    name[strlen(a)]=0;  } 
    
    else {
         name = new char[10];
         memset(name,0,sizeof(char)*10);}
                            
    }  

    int set_age(int a){this->age=a;   
    
   // return age;}
      }
      
    int getage(){
        return age;
        
        }
    int* getweight(){
        
       
        return &weight;
        
        
        }
    int growup(){
        static int name=0;
        
        age++;
        
        
        }
        
    int growB(){
        growup();
        weight++;
        
        }
    
    
    int getNameS();

      
};

int student::operator+(student & s){
    
 return this->age+s.age;   
    
}

int student::avgweight=91;
student::~student(){
                    cout<<"leave"<<endl;
                    delete [] name;
                    
                    }

//int student::age = 1;
float student::eat(student *b,int a){
      this->age --;
      b=this;
      return age;
      }
     
int student::get_age(int a) const{
    
 //   age=a;
    return age;
}


int student::getNameS(){
    
    return sizeof(age);
    
    
}

    int fun (int a){
        
        return a;
        }
    int fun2(int a){
        
        int (*fp)(int)= fun;
        
       printf("%d\n",fp);
        return fun(a);
        
        }
int main (){
    
   // int a = 1;
    int b[2]={230,231};
    const int  * const bp=b;
   // bp=b;
    
   // cout<<bp<<endl;
    
    //bp++;
    
    //cout<<bp<<endl;
   // (*bp)++;
    
    //cout<<b<<endl;
    
    student s1(23,171,91,"Jee");
    
   // student s2=s1;
    student s2(s1);
    cout<<s1.getname()<<endl;
   s1.setna("Weliams");
     cout<<s1.getname()<<endl;
      cout<<s2.getname()<<endl;
    
    cout<<s1.getage()<<endl;
    cout<<s2.getage()<<endl;
    cout<<s1+s2<<endl;
    
    //test function pointer

    int (*fp)(int);
    
    int (*fp1)(void);
    
 
    fp = &fun;
   // fp1=student::getav();
    fun2(b[0]);
    
   // printf("%d\n", sizeof(*fp));
    printf("%d\n",fp);
   // cout<<fp<<endl;
       printf("%d\n",s1.fp1);
  //  cout<<s1.fp1<<endl;
   // cout<<s2.fp1<<endl;
       printf("%d\n",s2.fp1);
    
    
   // s1.setage(33);
  //  s1.setavg(73);
  //  cout<<s1.getav()<<endl;
  //  cout<<sizeof(s1)<<endl;
  //  cout<<s1.getav()<<s2.getav()<<endl;
  //  printf("%d\n", s1.getweight());
  //  cout<<dec<<s1.getweight()<<s2.getweight()<<endl;
    student *ps1, &rs1=s1;
    ps1=&s1;
    
    s1.growB();
    const int d= s1.get_age(b[0]);
    
 //   d++;
    cout<<s1.getweight()<<endl;
    
    int size= s1.getNameS();
  //  cout<<s.get_age()<<endl;
    
    
    
    
    cout<<&s1<<endl;

 //   student::age=23;
 
     s1.eat(&s1,b[0] );
    int x,y;
    //cin>>x>>y;
    
    x = 10, y =23;
    
    
    
    int &a = x;
    
    a= (int &)y;
    
    //a=a+1;
    
    //y = 23;
    
    swap(a,y);
    
    
    
    cout<<x<<endl<<y<<endl;
    
    //practice destrutor
    
    //{student s;}
    
    student s(31,173,91,"dong");
    
    cout<<s.getname()<<endl;
    
    
    cout<<s.getage()<<endl;
    
    
    
    student *ps = new student[2];
    
    ps->set_age(10);
    
    
    
    (ps+1)->set_age(20);
    
    ps[1].set_age(33);
    cout<<ps->getage()<<"!"<<endl;
        cout<<(ps+1)->getage()<<"!"<<endl;
   // delete(&s);
    
  /*  
    
    while (!(cin>>x).eof())
    {
     cout.width(10);
    std::cout<<x<<endl;
    cout<<hex<<uppercase;
    cout.width(10);
    cout<<left<<x<<endl;
   
   
    //ios::endl;
    int *p = new int[x];
    
    delete [] p;
    //std::cout<<std::endl;
    system("pause");
    
    
    
}*/

  system("pause");
    
    
    return 0;
  
}
