//Structure as parameter

#include <iostream>

struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle r1)     //method of passing structure in formal argument(call by value)
{ 
return r1.length * r1.breadth;
}

using namespace std;

int main()
{
    struct rectangle r = {10,5};
    cout<<area(r);
    
   
    
    
    return 0;
}




//Structure as parameter

#include <iostream>

struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle &r1)     //method of passing structure in formal argument(call by reference)
{ 
    r1.length++;
return r1.length * r1.breadth;
}

using namespace std;

int main()
{
    struct rectangle r = {10,5};
    cout<<area(r);
    
   
    
    
    return 0;
}