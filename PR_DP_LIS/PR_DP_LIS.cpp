#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--){
        int N;
        cin>>N;
        int A[N];

        for(int i=0;i<N;i++){
            cin>>A[i];
        }

        int dp[N] = {0};
        int ans = 0;

        for(int i=0;i<N;i++){
            dp[i] = 1;
            for(int j=1;j<i;j++){
                if(A[j] < A[i])
                dp[i] = max(dp[i], 1+dp[i]);
            }
            ans = max(ans ,dp[i]);
        }
        cout<<ans<<endl;
    }
}
