#include <bits/stdc++.h>
using namespace std;

int main(){
    bool ans = false;
    int N, X;
    cin >> N >> X;

    int A[N];
    for(int i = 0; i < N; i++)cin >> A[i];

    for(int i = 0; i < N; i++){
        if(X == A[i])ans = true;
    }
    if(ans == true)cout << "Yes" << endl;
    else cout << "No" << endl;
  	return 0;
}