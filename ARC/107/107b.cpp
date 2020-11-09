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
    int N, K;
    cin >> N >> K;

    vector<int>ab,cd;


    for(int i = 2; i<=2*N ; i++){
        if(i - K >= 2 && i- K <= 2*N){
            ab.push_back(i);
            cd.push_back(i-K);
        }
    }


    long long ans = 0;
    for(int i = 0; i<ab.size(); i++){
        long long x,y;
        if(ab[i] <= N+1) x = ab[i]-1;
        else x = (N+1)*2 - ab[i] -1;

        if(cd[i] <= N+1) y = cd[i]-1;
        else y = (N+1)*2 -cd[i] -1;
        
        ans +=  x * y;
    }

    cout << ans << endl;




}