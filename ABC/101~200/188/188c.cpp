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
    int n;
    cin >> n;

    vector<int>a(pow(2,n));
    rep(i,pow(2,n))cin >> a[i];

    vector<int>pre = a;
    vector<int>next;
    rep(i,n-1){
        vector<int>next(pow(2,n-i-1));
        rep(j,pow(2,n-i-1)){
            next[j]= max(pre[j*2],pre[j*2+1]);
        }
        pre = next;
    }

    rep(i,pow(2,n)){
        if(a[i] == min(pre[0],pre[1]))cout << i+1 << endl;
    }
    
}