/*問題文
高橋君はデータの加工が行いたいです。

整数 
a,b,cと、文字列 
s が与えられます。 
a+b+c の計算結果と、文字列 
s を並べて表示しなさい。

制約
1≤a,b,c≤1,000
1≤
∣s∣
≤100
入力
入力は以下の形式で与えられる。

a
b 
c
s
出力
a+b+c と 
s を空白区切りで 
1 行に出力せよ。

入力例 1 
Copy
1
2 3
test
出力例 1 
Copy
6 test
1+2+3 は 
6 なので、上記のように出力します。
入力例 2 
Copy
72
128 256
myonmyon
出力例 2 
Copy
456 myonmyon
72+128+256 は 
456 なので、上記のように出力します。
注意！
CやC++を使うときは、
main 関数の型を 
int で指定し、ちゃんとreturn 0;してください。

Javaを使うときは、クラス名をMainにしてください。mainではコンパイルエラーになります。
*/

#include <iostream>

int main()
{
    int a,b,c;

    std::cin >>  a ;
    std::cin >> b >> c;

    std::string s;
    std::cin >> s;
    std::cout << (a+b+c) << s <<std::endl;
    return 0;
}