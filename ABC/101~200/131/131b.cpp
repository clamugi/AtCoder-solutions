#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main() {
    // 入力
    int N, A;
    cin >> N >> A;
 
    // 処理
    int L = A;
    int R = A + N - 1;
 
    int eat;
    if (R <= 0)
        eat = R;
    else if (L >= 0)
        eat = L;
    else
        eat = 0;
 
    int answer = (R + L) * (R - L + 1) / 2 - eat;
 
    // 出力
    cout << answer << endl;
 
    return 0;
}