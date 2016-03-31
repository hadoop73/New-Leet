#include <iostream>
#include <vector>
#include "countArea.h"

using namespace std;

int main() {

    MaxInnerRec s;
    vector<int> v = {511,211,745,720,81,48};
    int t = s.countArea(v,6);
    cout << t;
    cout << endl;
    return 0;
}