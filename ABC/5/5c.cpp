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
    int T, N, M;
    cin >> T >> N;

    vector<int>takoyaki(N);
    rep(i,N)cin >> takoyaki[i];
    
    cin >> M;
    vector<int>person(M);
    rep(i,M)cin >> person[i];



    int hito = 0;
    bool check = true;
    for(int i = 0; i<N;i++){
        if(takoyaki[i] + T >= person[hito] && takoyaki[i] <= person[hito]){
            hito++;
        }
    }
    if(hito == M)cout <<"yes" << endl;
    else cout << "no" << endl;
}