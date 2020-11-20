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
    string sa, sb, sc;
    cin >>sa >> sb >> sc;

    int a = 0, b = 0, c = 0;
    
    char next =sa[0];
    a += 1;

    while(true){
        switch (next)
        {
        case 'a':
            if(a >= sa.length()){
                cout << "A" << endl;
                return 0;
            }
            next = sa[a];
            a += 1;
            break;
        
        case 'b':
            if(b >= sb.length()){
                cout << "B" << endl;
                return 0;
            }
            next = sb[b];
            b += 1;
            break;

        case 'c':
            if(c >= sc.length()){
                cout << "C" << endl;
                return 0;
            }
            next = sc[c];
            c += 1;
            break;
        
        default:
            break;
        }
    }

    

}