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
    long long N, P;
    cin >> N >> P;


    vector<pair<long long, long long>>soi;
    for(long long i = 2; i*i<= P; i++){
        if(P%i == 0){
            long long ex = 0;
            while(P%i == 0 ){
                P /= i;
                ex++;
            }
            soi.push_back({i,ex});
        }
    }
    if(P!= 1)soi.push_back({P,1});

    long long ans = 1;
    for(auto x : soi){
        int a = x.second/N;
        ans *= pow(x.first,a);
    }

    cout << ans << endl;

}