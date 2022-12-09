/**
 * @ Topic:: Proposition Logic
 * ---------------------------
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
    cout << "conjunction" << endl << _conjunction() << endl;
    
    cout << "disjunction" << endl << _disjunction() << endl;
    
    cout << "implication" << endl << implication() << endl;
    
    cout << "bi_implication" << endl << bi_implication() << endl;


    return 0;
}
