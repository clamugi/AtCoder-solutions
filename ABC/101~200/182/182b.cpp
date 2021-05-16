#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main (){
    int N;
    cin >> N;

    vector<int>A(N);
    rep(i,N)cin >> A[i];

    pair<int,int> ans = make_pair(-1,0);
    for(int k = 2; k<=1000; k++){
        int gcds = 0;
        for(int i = 0; i<N; i++){
            if(A[i]%k == 0)gcds++;
        }
        if(ans.second < gcds){
            ans = make_pair(k,gcds);
        }
    }

    cout << ans.first << endl;
}