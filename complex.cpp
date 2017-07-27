#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

template <class T>
class Complex{
      
public: T real, imagine;
public:
Complex(): real(0), imagine(0){}
Complex(T _real, T _imagine): real(_real), imagine(_imagine){}
Complex(Complex &c): real(c.real), imagine(c.imagine){cout<<""<<endl;}
~Complex(){


           cout<<real<<"Leave"<<endl;
          // system("pause");
           
           }
           
//Complex(Complex &c):real(c.real), imagine(c.imagine){}
/*
Complex print();
Complex operator + (Complex &);
*/
Complex &print(){
        
        
        cout<<real<<"+"<<imagine<<"i"<<endl;
        return *this;
        }

Complex & operator= (const Complex & c){
        
     //   if (c==NULL) cout<<"here"<<endl;
        cout<<"here"<<endl;
        this->real=c.real;
        imagine = c.imagine;
        
        return *this;
        }  
        
 /*       
Complex & equal(const Complex &c){
        
     //   if (c==NULL) cout<<"here"<<endl;
        cout<<"here"<<endl;
        this->real=c.real;
        imagine = c.imagine;
        
        return *this;
        }
        */
          
Complex & operator+=(const Complex &c){
         
         real+=c.real;
         imagine+=c.imagine;
         return *this;
         
         }
const Complex  operator + (const Complex &c)const{
//Complex *c3= new Complex();
Complex c3;
 c3=*this;

 c3+=c;

return c3;

//return *this;
}
      
      





};
/*
Complex Complex<T>::print(){
        
        
        cout<<real<<"+"<<imagine<<"i"<<endl;
        return *this;
        }
Complex Complex::operator + (Complex &c){
return new Complex(real+c.real, imagine+c.imagine);
}

*/


string getName(){
       
       
       return "dong";
       }
int main(){
    
     Complex<double> c1(1.3,2.3), c2(2.3,3.23);
   //  Complex<double> c3(c1+c2);
   

   
   
   c1+c2;
   Complex<double> c3;
   
   c3=c1+c2;
   
   c3.print();
   //c1.+(c2);
   
  // c3.equal(c1.operator+(c2));
    //c1+c2;
    //Complex<double>c3((Complex<double> &)(c1+c2));
    
   // Complex<double> c3((c1+c2).real,(c1+c2).imagine);
    //string a= getName();
    const 
    string &a = getName();
    
    cout<<a<<endl;
  //      string &&b;
    Complex<double> c23=c3;
    // c3.print();
   //  c1.operator=(c2);
     //c3.operator=(c1+c2);
     
     
    // c1.print();
  // (c1+c2).print();
    // c1=c2;
    system("pause");     
  //   Complex<double> &c=(c1+c2);
    //   c3.operator=(c1+c2);
       
      // c3.print();
     //c3.print();
     //c3.print();
     
  //   int a=5, b=21;
     
  //   a.operator+(b);
     
     
     system("pause");
     return 0;   
    
    
    
    
    
}
