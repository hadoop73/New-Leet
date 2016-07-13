//
// Created by hadoop on 7/13/16.
//

#ifndef NEW_LEET_SIMPLIFYPATH_H
#define NEW_LEET_SIMPLIFYPATH_H

#include "header_file.h"

class Solution {
public:
    string simplifyPath(string path) {
        string res, tmp;
        vector<string> stk;
        stringstream ss(path);
        while(getline(ss,tmp,'/')) {
            if (tmp == "" or tmp == ".") continue;
            if (tmp == ".." and !stk.empty()) stk.pop_back();
            else if (tmp != "..") stk.push_back(tmp);
        }
        for(auto str : stk) res += "/"+str;
        return res.empty() ? "/" : res;
    }
};


#endif //NEW_LEET_SIMPLIFYPATH_H
