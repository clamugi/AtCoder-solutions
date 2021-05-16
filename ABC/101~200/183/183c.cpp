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
    cin >> N>> K;

    vector<vector<int>>T(N,vector<int>(N));
    rep(i,N){
        rep(j,N){
            cin >> T[i][j];
        }
    }


    vector<int>a;
    for(int i = 1; i<N; i++)a.push_back(i);

    int ans = 0;
    do{
        long long cost = 0;
        for(int i = 0; i<a.size()-1; i++){
            cost += T[a[i]][a[i+1]];
        }
        cost += T[0][a[0]];
        cost += T[a[a.size()-1]][0];
        if(cost == K)ans++;
        

    }while(next_permutation(a.begin(),a.end()));
    cout << ans << endl;








    
}