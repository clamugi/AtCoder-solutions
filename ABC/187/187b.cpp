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

    vector<pair<int,int>>point(n);
    rep(i,n){
        int x, y;
        cin >> x >> y;

        point[i] = make_pair(x,y);
    }

    int ans = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            double m = (double) (point[j].second-point[i].second)/(point[j].first-point[i].first);
            if(m>=-1 && m<=1)ans++;
        }
    }

    cout << ans << endl;
    
}