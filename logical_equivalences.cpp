#include <iostream>

using namespace std;

void identityLaws() {
    bool p = true;
    
    if(p && true ) {
        cout << "p" << endl;
    }
    
    if (p && true) {
        cout << "p" << endl;
    }
}

int main()
{
    identityLaws();

    return 0;
}
