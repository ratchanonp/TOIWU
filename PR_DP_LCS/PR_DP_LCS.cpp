#include <bits/stdc++.h>
using namespace std;

int LCS_Length(string str1,string str2,int m,int n){

    int L[m+1][n+1];
    for(int i=0;i<=m;i++) L[i][0] = 0;
    for(int j=0;j<=n;j++) L[0][j] = 0;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(str1[i-1] == str2[j-1]){
                L[i][j] = L[i-1][j-1] + 1;
            }
            else {
                L[i][j] = max(L[i-1][j], L[i][j-1]);
            }
        }
    }

//    for(int i=0;i<=m;i++){
//        for(int j=0;j<=n;j++){
//            cout<<L[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    return L[m][n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--){
        int m,n;
        cin>>m>>n;

        string str1,str2;
        cin>>str1>>str2;

        cout<<LCS_Length(str1,str2,m,n)<<endl;
    }
}
