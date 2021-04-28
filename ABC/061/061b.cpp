#include <bits/stdc++.h>
 
using namespace std;
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i< (int) n; i++)
#define PI  3.14159265358979323846264338327950
 
 
int main () {
    int N, M;
    cin >> N >> M;

    vector<int>tosi(N,0);

    rep(i,M){
        int a,b;
        cin >>a >> b;

        tosi[a-1] += 1;
        tosi[b-1] += 1;
    }

    rep(i,N){
            cout << tosi[i] << endl;
        }
    

}
