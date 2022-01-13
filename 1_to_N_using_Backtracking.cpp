#include <iostream>
using namespace std;

void oneToN(int i, int n)
{
    if (i < 1)
        return;
    else
    {
        oneToN(i - 1, n);
        cout << i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    oneToN(n, n);
    return 0;
}