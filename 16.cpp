//print array address

#include <iostream>

using namespace std;

int main()
{
   int A[5];
   
   int i;
   for(int i=0;i<5;i++)
   cout<<&A[i]<<endl;
   
}