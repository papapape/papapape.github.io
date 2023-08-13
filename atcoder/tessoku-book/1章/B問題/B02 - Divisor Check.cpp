#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    bool ans = false;

    cin >> A >> B;
    for(int i = A; i <= B; i++){
        if(100 % i == 0) ans = true;
    }
    if(ans == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}