#include <bits/stdc++.h>
using namespace std;

int main(){
    string N;
    int ans  =0;
    cin >> N;

    int keta,kurai;
    for(int i = 0; i < N.size(); i ++){
         kurai = (1 << (N.size() -1 -i));

         if(N[i] == '0') keta = 0;
         else keta = 1;
         ans += keta * kurai;
    }
    cout << ans << endl;
    return 0;

}