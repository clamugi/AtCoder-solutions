#include <bits/stdc++.h>
 
using namespace std;
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i< (int) n; i++)
 
 
int main() {
     string S;
     cin >> S;

     string tango[4] = {"dream","dreamer","erase","eraser"};

     reverse(S.begin(), S.end());
     rep(i,4){reverse(tango[i].begin(),tango[i].end());}


    for (int i = 0; i < S.size();){
        bool can2 = false ;
        rep(j,4){
            string d = tango[j];
            if(S.substr(i,d.size()) ==d){
                can2 = true;
                i += d.size();
            }
        }
        if(!can2){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    }


    
