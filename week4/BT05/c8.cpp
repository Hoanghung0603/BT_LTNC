#include <cmath>
#include <iostream>

using namespace std;

int rnd(double d)
{
    return floor (d+0.5);
    // ko dung floor
    // return int (d+0.5);
}

int main()
{
    double d;
    cin>>d;
    cout<<rnd(d)<<endl;
    return 0;
}
