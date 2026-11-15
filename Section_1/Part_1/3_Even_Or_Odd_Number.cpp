// todo: Read an integer N and tell whether it is even or odd. Zero and negative numbers must be handled too.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}

// todo:  Bit check: The lowest bit of an odd number is 1.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     cout << ((n & 1) ? "Odd" : "Even") << endl;

//     return 0;
// }