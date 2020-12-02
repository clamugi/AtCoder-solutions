#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}


int main () {
    int N;
    cin >> N;

    vector<bool>nums(100010,true);
    repr(i,1,N+1){
        int p;
        cin >> p;
        if(p == i)nums[i] = false;
    }


    int ans = 0;
    repr(i,1,N+1){
        if(nums[i])continue;
        else{
            if(!nums[i+1])i++;
        }
        ans++;
    }
    cout << ans << endl;
 
}