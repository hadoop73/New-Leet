//
// Created by hadoop on 6/30/16.
//

#ifndef NEW_LEET_VISIT_H
#define NEW_LEET_VISIT_H

#include "header_file.h"

class Visit {
public:
    int countPath(vector<vector<int> > map, int n, int m) {
        // write code here
        int cnt = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (map[i][j]==2){
                    helper(map,i,j,1,1);
                    helper(map,i,j,-1,1);
                    helper(map,i,j,1,-1);
                    helper(map,i,j,-1,-1);
                    return cnt;
                }

    }

private:
    bool helper(vector<vector<int> > map,int x,int y,int dx,int dy){
        cout<<x<<" "<<y<<" "<<dx<<" "<<dy<<endl;
        int lx = map.size();
        int ly = map[0].size();
        if (x<0||x>=lx)
            return false;
        if (y<0||y>=ly)
            return false;

        if (map[x][y]==1) {
            cnt++;
            return true;
        }
        if (map[x][y]==-1)
            return false;

        return helper(map,x,y+dy,dx,dy)||helper(map,x+dx,y,dx,dy);
    }
    int cnt = 0;

};

#endif //NEW_LEET_VISIT_H
