#include <bits/stdc++.h>
using namespace std;
int main()
{
    int one; cin >> one;
    for (int i=0; i<one; i++)
    {
        int two,three; cin >> two >> three;
        int num=0; 
        for (int i=0; i<two; i++)
        {
            int four; cin >> four;
            if (four<=0) num++; 
        }
        if (num>=three)
        {
            cout << "NO" << '\n'; 
        }
        else cout << "YES" << '\n';
    }
    return 0; 
}