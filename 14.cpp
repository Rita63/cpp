//template class and functions

#include <iostream>

using namespace std;

template <class T>       //template class
class Rectangle{
   T length ;           //data member
   T breadth;           //data member
   public:
   
   Rectangle();   //non parameterized constructor
   
  
   
   
   Rectangle(T l,T b);         //parameterized constructor
   T area();                     //member function
   T parameter();                //member function
   
};
template <class T>                 //template class
Rectangle<T>:: Rectangle(T l,T b)
{
    length = l;
    breadth = b;
}
   template <class T>
  T Rectangle<T>::area(){                  //implementing function outside the class
       return length * breadth;
   }
   
   template <class T>
   
  T Rectangle<T>::parameter(){
       return 2*(length + breadth);
   }



int main()
{
    Rectangle<int> r(10,5);
    
    cout<<"\narea is"<<" " << r.area(); 
    cout<<"\nparameter is" <<r.parameter();
    
     Rectangle<float> r1(10.6,5.7);
    
    cout<<"\narea is"<<" " << r1.area(); 
    cout<<"\nparameter is" <<r1.parameter();

    return 0;
}
