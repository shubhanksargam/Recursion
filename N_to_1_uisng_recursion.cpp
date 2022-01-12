#include <iostream>
using namespace std;

void oneToN(int i)
{
    if (i < 1)
        return;
    else
    {
        cout << i << endl;
        oneToN(i-1);
    }
}

int main()
{
    int n;
    cin >> n;
    oneToN(n );
    return 0;
}