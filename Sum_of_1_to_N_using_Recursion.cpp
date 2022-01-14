//Parameterized way
#include <iostream>
using namespace std;
void oneToN(int i, int s)
{
    if (i < 1){
        cout<< s;
        return;
    }
    else
    {
        oneToN(i-1, s+i);
    }
}

int main()
{
    int n;
    cin >> n;
    oneToN(n, 0);
    return 0;
}
