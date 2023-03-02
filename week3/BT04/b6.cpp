#include <iostream>

using namespace std;

int BinarySearch( int* a, int first, int last, int key)
{
    while( first < last )
    {
        int mid = ((first + last) / 2);
        if( a[mid] < key )
        {
            first = mid + 1;
        }
        else
        {
            last = mid;
        }
    }
    if( a[last] == key )
    {
        return last;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    int a[n],b[n],c[n];
    int indexB = 0;
    int indexC = 0;

    for(int i =0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i] >= 0)
        {
            b[indexB] = a[i];
            ++indexB;
        }
        else
        {
            c[indexC] = a[i];
            ++indexC;
        }
    }

    bool flag = 0;
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            int sum1 = b[i] + b[j];
            if( BinarySearch(c,0,indexC,sum1*(-1)) != 0 )
            {
                cout << b[i] << " " << b[j] << " " << BinarySearch(c,0,indexC,sum1*(-1)) << endl;
                flag = 1;
                return 0 ;
            }

              int sum2 = c[i] + c[j];
            if( BinarySearch(b,0,indexB,sum2*(-1)) != 0 )
            {

                cout << c[i] << " " << c[j] << " " << BinarySearch(b,0,indexB,sum2*(-1)) << endl;
                flag = 1;
                return 0 ;
            }
        }
    }

    if( flag == 0 )
    {
        cout << "0" << endl;
    }

    return 0;
}
