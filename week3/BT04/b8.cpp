#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector< int > nam;
    vector< int > nu;

    for(int i = 0; i < n; ++i)
    {
       int x;
       cin >> x;
       nam.push_back(x);

       int y;
       cin >> y;
       nu.push_back(y);
    }

    sort( nam.begin(), nam.end() );
    sort( nu.begin(), nu.end() );

    for( int i = 0; i < n; ++i)
    {
        if( nam[i] < nu[i] )
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
