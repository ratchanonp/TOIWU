#include <bits/stdc++.h>
using namespace std;

long long int path[100][100] = {0};

long long int count_path(int i,int j){

    if(i == 0||j == 0){
        int ans = 1;
        path[i][j] = ans;
        return ans;
    }

    if(path[i][j] != 0){
        return path[i][j];
    }

    long long int ans = (count_path(i-1,j) + count_path(i,j-1))%1000000007;
    path[i][j] = ans;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;

    while(T--){
        int N,M;
        cin>>N>>M;
        cout<<count_path(N-1,M-1)<<"\n";
    }
}
