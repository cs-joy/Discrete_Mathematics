/**
 * @ Topic:: Proposition Logic
 * ---------------------------
 * Conjunction
 * Disjunction
 * Exclusive Or
 * Implication
 * Bi Implication
*/

#include <iostream>
#include <string>

using namespace std;


string _conjunction() {
    bool p = true;
    bool q = true;
    
    if(p && q == true){
        return "T";
    }
    
    return "F";
}


string _disjunction() {
    bool p = false;
    bool q = false;
    
    if(p == false && q == false) {
        return "F";
    }
    
    return "T";
}


string exclusiveOr() {
    bool p = true;
    bool q = false;
    
    if (p != q) {
        return "T";
    }
    
    return "F";
}


string implication() {
    bool p = true;
    bool q = false;
    
    if(p == true && q == false) {
        return "F";
    }
    
    return "T";
}


string bi_implication() {
    bool p = false;
    bool q = false;
    
    if(p == q) {
        return "T";
    }

    return "F";
}

int main()
{
    cout << "conjunction:: " << _conjunction() << endl;
    
    cout << "disjunction:: " << _disjunction() << endl;
    
    cout << "exclusiveOr:: " << exclusiveOr() << endl;
    
    cout << "implication:: " << implication() << endl;
    
    cout << "bi_implication:: " << bi_implication() << endl;


    return 0;
}
