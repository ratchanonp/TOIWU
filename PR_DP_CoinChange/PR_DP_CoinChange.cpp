#include <bits/stdc++.h>
using namespace std;

int count_c(int A[], int M, int N) {

	int T[N+1];

	for (int i = 0; i <= N; i++) {
		T[i] = 0;
	}

	T[0] = 1;

	for (int i = 0; i < M; i++) {
		for (int j = A[i]; j <= N; j++) {
			T[j] += T[j - A[i]];
		}
	}

	return T[N];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--){
        int M;
        cin>>M;

        int A[M];

        for(int i=0;i<M;i++) {
            cin>>A[i];
        }

        int N;
        cin>>N;

        cout<<count_c(A, M, N)<<endl;
    }
}
