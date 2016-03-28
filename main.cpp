#include <iostream>
#include <vector>
#include "binarysearch.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    BinarySearch s;
    vector<int> B = {3,3,5,7,9};
    cout << s.getPos(B,5,9) << endl;
    return 0;
}