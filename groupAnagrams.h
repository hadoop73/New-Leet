//
// Created by hadoop on 7/3/16.
//

#ifndef NEW_LEET_GROUPANAGRAMS_H
#define NEW_LEET_GROUPANAGRAMS_H

#include "header_file.h"

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        map<string,vector<string>> m;
        for(string s:strs){
            string str(s);
            sort(str.begin(),str.end());
            if (m.find(str)==m.end()){
                vector<string> vt = {s};
                m.insert({str,vt});
            } else{
                m[str].push_back(s);
            }
        }
        vector<vector<string>> res;
        for (auto i = m.begin();i!=m.end() ; ++i) {
            res.push_back(i->second);
        }
        return res;
    }
};

#endif //NEW_LEET_GROUPANAGRAMS_H
