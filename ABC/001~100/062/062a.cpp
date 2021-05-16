#include <bits/stdc++.h> 
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    vector<int>G(13);
    G[1] = 1;
    G[2] = 3;
    G[3] = 1;
    G[4] = 2;
    G[5] = 1;
    G[6] = 2;
    G[7] = 1;
    G[8] = 1;
    G[9] = 2;
    G[10] = 1;
    G[11] = 2;
    G[12] = 1;

    if(G[x] == G[y])cout << "Yes" << endl;
    else cout << "No" << endl;
}