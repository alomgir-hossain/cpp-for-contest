// todo: Given two integers A and B, print their sum. The values can be large, so pick a data type that will not overflow.

#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    int sum = a + b;

    cout << sum << endl;

    return 0;
}