#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>ans_alphabets(26,100);

    for(int i = 0 ; i<n; i++){
        string S;
        cin >>S;
        
        vector<int>S_alphabets(26,0);
        for(int j = 0; j<S.size(); j++){
            int num = S[j]-'a';
            S_alphabets[num]++;
        }
        
        for(int j = 0; j<26; j++){
            ans_alphabets[j] = min(ans_alphabets[j],S_alphabets[j]); 
        }
    }

    for(int i = 0; i<26; i++){
        for(int j = 0; j<ans_alphabets[i]; j++){
            char a = 'a'+i;
            cout << a;
        }
    }
    cout << endl;

}