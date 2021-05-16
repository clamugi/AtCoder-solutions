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
    int a, b, c;
    cin >> a >> b >> c;

    string name[2] = {"Aoki","Takahashi"};
    if(c == 1){
        swap(a,b);
        swap(name[0],name[1]);
    }

    while(true){
        if(a==0){
            cout << name[0] << endl;
            return 0;
        }
        a--;

        if(b==0){
            cout << name[1] << endl;
            return 0;
        }
        b--;
    }
}