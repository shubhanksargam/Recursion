#include <iostream>
using namespace std;

void oneToN(int i, int n)
{
    if (i > n)
        return;
    else
    {
        cout << i << endl;
        oneToN(i + 1, n);
    }
}

int main()
{
    int n;
    cin >> n;
    oneToN(1, n);
    return 0;
}