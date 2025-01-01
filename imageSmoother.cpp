// https://leetcode.com/problems/image-smoother/description/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > imageSmoother(vector<vector<int> >& img) {
    int n = img.size();
    int m = img[0].size();
    vector<vector<int> > ans(n, vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp = 0;
            int count = 0;
            for(int k= -1;k<=1;k++){
                for(int l= -1;l<=1;l++){
                    if(i+k >= 0 && i+k < n && j+l >=0 && j+l < m){
                        temp += img[i+k][j+l];
                        count++;
                    }
                }
            }
            ans[i][j] = temp / count;
        }
    }
    return ans;
}
int main (){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > img(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp ;
            cin >> temp;
            img[i][j] = temp;
        }
    }
    vector<vector<int> > ans = imageSmoother(img);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}