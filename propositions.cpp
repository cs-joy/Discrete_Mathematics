/**
 * @ Topic:: Proposition Logic
 * ---------------------------
 * Implication
 * Bi Implication
*/


#include <iostream>
#include <string>

using namespace std;


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
    cout << "implication" << endl << implication() << endl;
    
    cout << "bi_implication" << endl << bi_implication() << endl;


    return 0;
}
