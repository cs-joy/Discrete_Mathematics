
#include <iostream>
#include <string>

using namespace std;


bool And() {
    bool x = 1;
    bool y = 1;
    
    if (x && y == 1) {
        return 1;
    }
    return 0;
}


bool Or() {
    bool x = 1;
    bool y = 1;
    
    if (x == 0 && y == 0) {
        return 0;
    }
    return 1;
}


bool XOR() {
    bool x = 1;
    bool y = 1;
    
    if (x != y) {
        return 1;
    }
    
    return 0;
}

int main()
{
    
    cout << "and-: " << And() << endl;
    cout << "or-: " << Or() << endl;
    cout << "XOR-: " << XOR();

    return 0;
}
