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


void distributiveLaws() {
    bool p = true;
    bool q = true;
    bool r = true;
    
    bool result1 = p || (q && r);
    bool result2 = (p || q) && (q || r);
    if(result1 == result2) {
        cout << "equivalent" << endl;
    }
    
    bool result11 = p && (q || r);
    bool result21 = (p && q) || (q && r);
    if(result11 == result21) {
        cout << "equivalent" << endl;
    }
}


void deMorgansLaws() {
    bool p = true;
    bool q = true;
    
    bool r1 = !(p && q);
    bool r2 = !p || !q;
    if(r1 == r2) {
        cout << "¬(p ∧ q) == ¬p V ¬q" << endl;
    }
    
    bool r11 = !(p || q);
    bool r21 = !p && !q;
    if(r11 == r21) {
        cout << "¬(p V q) == ¬p ∧ ¬q" << endl;
    }
}


void absorptionLaws() {
    bool p = true;
    bool q = true;
    
    bool r101 = p || (p && q);
    bool r201 = p && (p || q);
    
    if(r101 == p) {
        cout << "p V (p ∧ q) == p" << endl;
    }
    
    if (r201 == p) {
        cout << "p ∧ (p V q) == p" << endl;
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
    distributiveLaws();
    deMorgansLaws();
    absorptionLaws();

    return 0;
}
