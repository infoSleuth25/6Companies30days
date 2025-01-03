// https://leetcode.com/problems/bulls-and-cows/description/

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
string getHint(string secret, string guess) {
    int bulls = 0;
    unordered_map<char,int> m1,m2;
    for(int i=0;i<secret.size();i++){
        if(secret[i] == guess[i]){
            bulls++;
        }
        else{
            m1[secret[i]]++;
            m2[guess[i]]++;
        }
    } 
    int cows = 0;
    for(auto it: m1){
        if(m2.find(it.first) != m2.end()){
            cows += min(it.second,m2[it.first]);
        }
    }
    string ans = to_string(bulls) + "A" + to_string(cows) + "B";
    return ans; 
}
int main (){
    string secret, guess;
    cin >> secret >> guess;
    string ans = getHint(secret,guess);
    cout << ans << endl;
    return 0;
}