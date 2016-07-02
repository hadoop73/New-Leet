#include <iostream>
#include <vector>
#include "visit.h"

using namespace std;

int main() {

    Visit v;
    vector<vector<int> > map = {{0,1,0},{2,0,0}};
    int n = v.countPath(map,2,3);
    cout <<n << endl;
    return 0;
}