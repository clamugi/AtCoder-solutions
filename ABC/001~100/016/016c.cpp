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
    int n, m;
    cin >> n >> m;

    vector<vector<int>>person(n,vector<int>(n,0));

    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        person[a][b]++;
        person[b][a]++;
    }

    rep(i,n){
        vector<int>check(n,0);
        rep(j,n){
            if (i == j || person[i][j] == 0)continue;
            rep(k,n){
                if(j == k || i == k ||person[j][k] == 0)continue;
                if(person[i][k] == 0){
                    check[k] = 1;
                }
            }
        }
        int ans = count(check.begin(),check.end(),1);
        cout << ans << endl;
    }
}