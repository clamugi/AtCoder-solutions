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
    string S;
    cin >> S;

    if(S.length() == 1){
        int a = S[0]-'0';
        if(a%8==0)cout << "Yes" << endl;
        else cout << "No"  << endl;
        return 0;
    }
    if(S.length() == 2){
        int a = (S[0]-'0')*10 + S[1]-'0';
        int b = (S[1]-'0')*10 + S[0]-'0';
        if(a%8 == 0 || b%8 == 0)cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
    }
    

    vector<int>kazu(10,0);
    for(int i =0; i<S.size(); i++){
        int j = S[i]-'0';
        kazu[j]+=1;
    }

    int a = 8;
    for(int i = 13; a*i <=1000; i++){
        vector<int>eight(10,0);

        int j = a*i;
        while(j>0){
            int k = j%10;
            j /= 10;
            eight[k]++;
        }

        bool check = true;
        rep(z,10){
            if(eight[z] > kazu[z])check = false;
        }
        if(check){
            cout << "Yes" << endl;
            return 0;
        }

    }

    cout << "No" << endl;



    
    
}