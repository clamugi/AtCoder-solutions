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
    long long n, m, t;
    cin >> n >> m >> t;

    vector<int>cafe;
    rep(i,m){
        int a, b;
        cin >> a >> b;
        cafe.push_back(a);
        cafe.push_back(b);
    }

    long long vat = n;
    bool check = false;
    int cafes = 0;

    for(long long i = 0; i<t; i++){
        if(cafe[cafes] == i){
            if(cafes%2 == 0)check = true;
            else if(cafes%2 == 1)check = false;
            cafes++ ;
        }

        if(check){
            vat = min(vat+1,n);
        }
        else{
            vat -= 1;
        }

        if(vat<=0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout <<"Yes" << endl;
}