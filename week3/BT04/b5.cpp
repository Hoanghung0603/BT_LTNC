#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    bool flag = 0;
    for(int i = 0 ; i < n-1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if( ( a[i] + a[j] ) == 0 )
            {
                cout << a[i] << " " << a[j];
                flag = 1;
                break;
            }
        }
    }

    if( flag == 0 )
    {
        cout << "0" << endl;
    }

    return 0;
}
