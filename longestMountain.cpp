// https://leetcode.com/problems/longest-mountain-in-array/description/

#include<bits/stdc++.h>
using namespace std;
int longestMountain(vector<int>& arr) {
    int ans = 0;
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            cout << arr[i] << endl;
            int temp = 1;
            int j = i-1;
            while(j>=0 && arr[j] < arr[j+1]){
                temp++;
                j--;
            }
            j = i+1;
            while(j<arr.size() && arr[j] < arr[j-1]) {
                temp++;
                j++;
            }
            ans = max(temp,ans);
        }
    }
    return ans;
} 
int main (){
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v[i] = temp;
    }
    int ans = longestMountain(v);
    cout << ans << endl;
    return 0;
}