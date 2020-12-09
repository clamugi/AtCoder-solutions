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

    int a = N/5;
    int b = N%5;

    string card = "";
    for( int i = a%6 + 1; i < a%6 + 7 ; i++){
        if(i<=6)card += i+'0';
        else card += i-6+'0';
    }

    for(int i = 0; i<b; i++){
        swap(card[i],card[i+1]);
    }

    cout << card << endl;


}