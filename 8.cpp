//call by value("doesn't change the actual arguments")

#include <iostream>

using namespace std;
void swap(int x,int y)
{
    int temp;
    temp = x; 
    x = y;
    y = temp;
}

int main()
{
    int a ,b;
    cout<<"enter the variables to be swap";
    cin>>a>>b;
    swap(a,b);
    cout<<"variabls after swapping"<<endl;
    cout<<a<<" "<<b;

    return 0;
}
