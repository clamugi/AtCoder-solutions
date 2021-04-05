#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}
double radian(double degree){return degree * PI /180.0;}
double degree(double radian){return radian * 180.0/PI;}


bool isOK(int a) {
    if (a == 1) return true;
    else return false;
}
/* 
 binari_sezrch(ok,ng)でokとngを渡す方がよい
 条件を満たす最小の値をokで返す。
 ng⇔okで条件を満たす最大の値をokで返す
 */
int binari_search(int key){
    //ngとokは範囲外に
    int ng = -1;
    int ok = 10e9+1;

    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (isOK(mid)) ok = mid;
        else ng = mid;
    }
    return ok;
}





int main(){
    int N;
    cin >> N;

    vector<int>L(N);
    rep(i,N)cin >> L[i];

    sort(L.begin(),L.end());

    long long ans = 0;
    for(int i = 0; i<N;i++){
        for(int j = i+1; j<N; j++){
            int k = lower_bound(L.begin(),L.end(),L[i]+L[j])-L.begin();
        
        
        ans += max(k-(j+1),0);
        }
    }

    cout << ans << endl;


}
