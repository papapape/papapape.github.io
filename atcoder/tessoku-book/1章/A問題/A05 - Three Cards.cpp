// 2秒で終わらない
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int N,K,cnt = 0;
//     cin >> N >> K;

//     for(int i = 1; i <= N; i++){
//         for(int j = 1; j <= N; j++){
//             for(int k = 1; k <= N; k++){
//                 if(i+j+k == K) cnt++; 
//             }
//         }
//     }
//     cout << cnt << endl;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K,cnt = 0;
    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            int k = K - i - j;
            if( k >= 1 && k <= N) cnt++;
        }
    }
    cout << cnt << endl;
  return 0;
}