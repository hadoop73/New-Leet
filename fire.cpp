//
// Created by JQK on 2016/3/29.
//


#include "header_file.h"

int main(){

    int R,v[6],x,y;
    int cnt;
    while (cin>>R){
        for (int i = 0; i < 6; ++i) {
            cin >> v[i];
        }
        cin >> x;
        cin >> y;
        cnt = 0;
        for (int j = 0; j < 3; ++j) {
            if (R*R>=(v[j*2]-x)*(v[j*2]-x)+(v[j*2+1]-y)*(v[j*2+1]-y))
                cnt++;
        }
        cout << cnt <<"x" <<endl;
    }
}