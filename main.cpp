#include <iostream>
#include <vector>
#include "countBits.h"

using namespace std;

int main() {

    Solution s;
    vector<int> v = s.countBits(24);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}