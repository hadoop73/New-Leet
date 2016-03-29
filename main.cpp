#include <iostream>
#include <vector>
#include "longestDistance.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    LongestDistance s;

    vector<int> A={0,5};
    cout << s.getDis(A,2) << endl;
    return 0;
}