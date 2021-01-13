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
    int W,H,N;
    cin >> W >> H >> N;

    int xmin=0, xmax=W, ymin=0, ymax =H;

    rep(i,N){
        int x,y,a;
        cin >>x >> y >> a;

        switch(a){
            case 1:
                xmin= max(x,xmin);
                break;
            
            case 2:
                xmax = min(x,xmax);
                break;

            case 3:
                ymin = max(y,ymin);
                break;
            
            case 4:
                ymax = min(y,ymax);
                break;
        }
    }
    if(xmin >= xmax || ymin >= ymax)cout << 0 << endl;
    else cout << (xmax-xmin)*(ymax-ymin) << endl;



}
