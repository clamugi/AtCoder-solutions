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
    long long n, prime;
    cin >> n >> prime;

    vector<pair<int,int>>A;
    vector<pair<int,int>>B;
    rep(i,n){
        long long a, b ,c;
        cin >> a >> b >> c;
        b+= 1;

        A.push_back(make_pair(a,c));
        B.push_back(make_pair(b,c));
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());


    long long ans = 0;
    long long now = 0;
    long long a = 0;
    long long b = 0;
    for(long long i = 1; i<1000000010; i++){
        while(A[a].first == i){
            now += A[a].second;
            a++;
        }
        while(B[b].first == i){
            now -= B[b].second;
            b++;
        }
        ans += min(prime,now);
    }
    cout << ans << endl;
    
}