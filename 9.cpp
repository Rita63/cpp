//call by address("does change the actual arguments")

#include <iostream>

using namespace std;
void swap(int *x,int *y)   //address of actual argument to be taken by formal arguments using pointer i.e. *x and *y
{
    int temp;
    temp = *x; 
    *x = *y;
    *y = temp;
}

int main()
{
    int a ,b;
    cout<<"enter the variables to be swap";
    cin>>a>>b;
    swap(&a,&b);     //passing address of actual arguments
    cout<<"variabls after swapping"<<endl;
    cout<<a<<" "<<b;

    return 0;
}
