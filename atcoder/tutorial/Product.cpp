/*
問題文
シカのAtCoDeerくんは二つの正整数 
a,b を見つけました。 
a と 
b の積が偶数か奇数か判定してください。

制約
1 
≤ 
a,b 
≤ 
10000
a,b は整数
入力
入力は以下の形式で標準入力から与えられる。

a 
b
出力
積が奇数なら Odd と、 偶数なら Even と出力せよ。

入力例 1 
Copy
3 4
出力例 1 
Copy
Even
3×4=12 は偶数なので Even を出力してください。

入力例 2 
Copy
1 21
出力例 2 
Copy
Odd
1×21=21 は奇数なので Odd を出力してください。
*/

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if(( a * b ) %2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}