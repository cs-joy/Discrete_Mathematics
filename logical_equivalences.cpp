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


void commutativeLaws() {
    bool p = true;
    bool q = false;
    
    if (p && q == q && p) {
        cout << "p^q == q^p" << endl;
    }
    
    if (p || q == q || p) {
        cout << "p∨q == q∨p" << endl;
    }
}



void associatveLaws() {
    bool p = true;
    bool q = true;
    bool r = true;
    
    bool res1 = (p || q) || r;
    bool res2 = p || (q || r);
    
    if (res1 == res2) {
        cout << "true" << endl;
    }
    
    bool res11 = (p && q) && r;
    bool res21 = p && (q && r); 
    if (res11 == res21) {
        cout << "true" << endl;
    }
    
}


int main()
{
    identityLaws();
    dominationLaws();
    idempotentLaws();
    doubleNegationLaws();
    commutativeLaws();
    associatveLaws();

    return 0;
}
