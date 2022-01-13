#include <iostream>
using namespace std;

void oneToN(int i, int n)
{
    if (i > n)
        return;
    else
    {
        oneToN(i + 1, n);
        cout << i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    oneToN(1, n);
    return 0;
}