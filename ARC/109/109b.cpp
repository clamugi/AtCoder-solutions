#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

bool check (long long index, long long key){
    if( (2*key+2)/index >= 1+index)return true;
    else return false;
}

int main(){
    long long n;
    cin >> n;

    long long key = n;

    long long left = 0;
    long long right = n;

    if(n == 1 || n == 2){
        cout << 1 << endl;
        return 0;
    }


    while( right - left >1){
        long long mid = left + (right - left) /2;

        if(!check(mid,key)) right = mid;
        else left = mid;
    }


    cout << n-left+1 << endl;

}