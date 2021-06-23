//recursion

#include <iostream>

using namespace std;
void A(int n){
    if(n>0){
    cout<<n<<endl;
    A(n-1);

}
}

int main()
{
    int x =5;
    A(x);
    return 0;
}
