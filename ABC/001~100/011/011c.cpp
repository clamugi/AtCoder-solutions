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
    int N, g1, g2, g3;
    cin >> N >> g1 >> g2 >> g3;

    vector<int>masu(310,500);
    masu[0] = 0;
    masu[g1] = -1, masu[g2] = -1, masu[g3] = -1;


    for(int i = 0; i<=300; i++){
        for(int j = 1; j<=3; j++){
            if(masu[i] == -1)continue;
            masu[i+j] = min(masu[i]+1,masu[i+j]);
        }
    }


    if(masu[N] != -1 && masu[N] <=100){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}