//Functions

#include <iostream>

using namespace std;
int add(int x, int y) //function prototype
{
int z;
z = x + y ; //function definition
return z;
}


int main()
{
    int a,b,c;
    cout<<"enter two numbers to add"<<endl;
    cin>>a>>b;
    
    c= add(a,b); //function calling
    
    cout<<"sum is"<<endl<<c;

    return 0;
}