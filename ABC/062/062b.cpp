#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main(){
    int h, w;
    cin >> h >> w;

    vector<string>A(h);
    rep(i,h)cin >> A[i];

    for(int i = 0; i<h+2; i++){
        cout << "#";
        if(i == h+1 || i == 0){
            rep(j,w)cout << "#";
        }
        else cout << A[i-1];
        
        cout << "#" << endl;
    }

}