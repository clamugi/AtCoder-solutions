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
    int H1, W1, H2, W2;
    cin >> H1 >> W1 >> H2 >> W2;

    if(H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2){
        cout << "YES" << endl;
    } 
    else cout << "NO" << endl;
}