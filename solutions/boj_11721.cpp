#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s = "";
    cin >> s;
    
    for (int i = 0; i < s.size(); i = i + 10)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (s[i + j] == 0)
            {
                break;
            }
            cout << s[i + j];
        }
        cout << '\n';
    }
    return (0);
}