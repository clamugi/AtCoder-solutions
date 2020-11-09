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


    deque<int> dq;

    rep(i,n){
        int a;
        cin >> a;
        if(i % 2 == 0)dq.push_back(a);
        else dq.push_front(a);
    }

    rep(i,n){
        int a;
        if(n % 2 == 0)a =dq.front(), dq.pop_front();
        else a = dq.back(), dq.pop_back();

        cout << a << " ";
    }
    cout << endl;

}