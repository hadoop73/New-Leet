#include <iostream>
#include <vector>
#include "gift.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Gift s;

    vector<int> A={26316,43072,60522,60522,60522,92556,60522,92883,60522,60522,60522,78468,77779,6925,60522,60522,14543,72687,60522,60693,60522,67024,60522,53203,51914,60522,60522,63132,60522,1678,60522,60522,51411,14746,60522,60522,3988,74682,34876,28533,60522,81241,52488,60381,51210,60522,60522,82673,9396,60522,57140,60504,24174,9476,77156,7136,60522,60522,60522,60522,60522,60522,60522,60522,60522,84283,34490,60522,60522,96049,89339,30519,60522,25316,60522,82942,60522,25097,17830,60522,34192,28994,60522,86767,93688,60522,60522,91468,60522,60522,60522,60522,60522,60522,52131,813,60522,42362,60522,60522,18405,67642,60522,14263,60522,60522,60522,78908,48847,60522,70071,10752,9129,1164,39777,60522,60522,60522,94244,60522,60522,60522,25713,35431,60522,67928,60522,60522,88514,60522,60522,63001,60522,53716};
    //= {37256,61520,11540,61520,69323,61520,61520};
    cout << s.getValue(A,134) << endl;
    return 0;
}