#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) cin >> A[i];

    bool ans = false;
    for(int i = 0 ; i < N; i++){
        for(int j = i+1 ; j < N; j++){
            for(int k = j+1 ; k < N; k++){
                if(A[i] + A[j] + A[k] == 1000) ans = true;
            }
        }
    }
    if(ans == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}