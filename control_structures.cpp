/* 
    Conditional structures: if, else, switch
    With this structures we can define a secuence that can 
    be execute in case of be true the condition.
*/

#include <iostream>
using namespace std;

int main() {

    int types = 4;
    if (types == 1)
    {
        cout << "types = 1" << endl;
    }
    else if (types > 1)
    {
        cout << "types > 1" << endl;
    }
    else {
        cout << "types is different to 1" << endl;
    }
    
    //-----------------------------------------------------
    
    switch (types)
    {
        case 1: cout << "types is 1" << endl; break;
        case 2: cout << "types is 2" << endl; break;
        case 3: cout << "types is 3" << endl; break;
        case 4: cout << "types is 4" << endl; break;
        default: cout << "types is known" << endl; break;
    }
    
    
    return 0;
}
