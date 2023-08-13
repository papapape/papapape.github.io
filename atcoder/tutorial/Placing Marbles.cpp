#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    string s;

    cin >> s;
    for (int i = 0; i < 3 ; i++)
    {
        if(s[i] == '1')
        {
            cnt++;
        }
    }
    return 0;
}