//2d array
#include <iostream>

using namespace std;

int main()
{
    int A[3][4] = {{3,4,5,6},{7,8,9,4},{1,3,4,5}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<A[i][j]<<"\n";

        }
    }