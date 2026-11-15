// todo: Read N integers into a vector and print them in reverse order, separated by single spaces.

//? 1. Manual: Printing array in reverse

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

//? 2. Manual: vector + first reverse, then Print

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for (int &num : arr)
//     {
//         cin >> num;
//     }

//     for (int i = 0, j = n - 1; i < j; i++, j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }


// ? Built-in (STL)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &num : arr)
    {
        cin >> num;
    }

    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}