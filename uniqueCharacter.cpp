// https://leetcode.com/problems/first-unique-character-in-a-string/description/

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int firstUniqChar(string s) {
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(m[s[i]] == 1){
            return i;
        }
    }
    return -1;
}
int main (){
    string s;
    cin >> s;
    int ans = firstUniqChar(s);
    cout << ans << endl;
    return 0;
}