#include <iostream>
#include <vector>
#include "coder.h"

using namespace std;

int main() {

    Coder s;
    vector<string> A = {"i am a coder","Coder Coder","Code"};
    vector<string> C = s.findCoder(A,3);
    for (int i = 0; i < C.size(); ++i) {
        cout << C[i] ;
    }
    cout << endl;
    return 0;
}