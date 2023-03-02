#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i)
    {
        string t = "";
        t = t + s[i];

        for(int j = 0; j < s.size(); ++j)
        {
            t = t + s[j];
            cout << t << " ";

            for(int k = 0; k < s.size(); ++k)
            {
                t = t + s[k];
                cout << t << " ";
                t.pop_back();
            }
            t.pop_back();
        }
    }
}
