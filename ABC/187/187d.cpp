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
    int N;
    cin >> N;

    vector<pair<int, int>>kazu(N);
    vector<pair<long long,int>>sa(N);

    long long aoki =0;
    long long ta = 0;
    rep(i,N){
        long long a, b;
        cin >> a >> b;

        aoki += a;
        kazu[i] = make_pair(a,b);
        sa[i]= make_pair(-1*(2*a+b),i);
    }

    sort(sa.begin(),sa.end());


    rep(i,N){
        aoki -= kazu[sa[i].second].first;
        ta += kazu[sa[i].second].first + kazu[sa[i].second].second;


        if(aoki<ta){
            cout << i+1 << endl;
            return 0;
        }
    }


}