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


void idempotentLaws() {
    bool p = true;
    
    if (p && p) {
        cout << "p" << endl;
    }
    
    if(p || p) {
        cout << "p" << endl;
    }
}



void doubleNegationLaws() {
    bool p = true;
    
    if (!(!p)) {
        cout << p << endl;
    }
}



int main()
{
    identityLaws();
    dominationLaws();
    idempotentLaws();
    doubleNegationLaws();

    return 0;
}
