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


void dominationLaws() {
    bool p = true;
    
    if(p || true) {
        cout << "T" << endl;
    }
    
    if (p && false) {
        cout << "F" << endl; // not printed the result
    }
}


int main()
{
    identityLaws();
    dominationLaws();

    return 0;
}
