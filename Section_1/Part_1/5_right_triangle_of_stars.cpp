// todo: Print a right triangle made of * characters with N rows. Row i contains exactly i stars.


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}