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

    vector<int>colors(9,0);
    rep(i,N){
        int a;
        cin >> a;

        if(a>3200)a = 3200;
        colors[a/400]++;
    }

    int min = 0;
    int max = 0;
    rep(i,8){
        if(colors[i]>0)min++;
    }
    if(min == 0){
        min = 1;
        colors[8]--;
    }

    max = min + colors[8];

    cout << min <<" " <<  max << endl;


}