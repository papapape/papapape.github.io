/*
問題文
英大文字からなる長さ 
3 の文字列 
S が与えられます。
S が ACE、BDF、CEG、DFA、EGB、FAC、GBD のいずれかと等しいとき Yes を、そうでないとき No を出力してください。

制約
S は英大文字からなる長さ 
3 の文字列
入力
入力は以下の形式で標準入力から与えられる。

S
出力
S が ACE、BDF、CEG、DFA、EGB、FAC、GBD のいずれかと等しいとき Yes を、そうでないとき No を出力せよ。

入力例 1 
Copy
ABC
出力例 1 
Copy
No
S= ABC のとき、
S は ACE、BDF、CEG、DFA、EGB、FAC、GBD のいずれとも等しくないので No を出力します。
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i = 0;
    string s;
    std::vector<string> vec{ "ACE","BDF","CEG","DFA","EGB","FAC","GBD" };
    int size = vec.size();
    cin >> s;

    for(i;i < size; i++){
        if(s.compare(vec[i])==0){
            break;
        }
    }
    if(i < size){
        cout  << "Yes" <<endl;
    }else{
        cout  << "No" <<endl;
    }
} 



