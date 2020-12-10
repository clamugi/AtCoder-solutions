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

    vector<int>tree(N);
    vector<long long>cost(N,10e9);

    rep(i,N)cin >>tree[i];

    cost[0] = 0;
    cost[1] = abs(tree[1]-tree[0]);

    for(int i = 2; i<N; i++){
        cost[i] = min(cost[i], cost[i-1] + abs(tree[i]-tree[i-1]));
        cost[i] = min(cost[i], cost[i-2] + abs(tree[i]-tree[i-2]));
    }

    cout << cost[N-1] << endl;


}