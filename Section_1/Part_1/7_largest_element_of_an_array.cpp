// todo: Read N integers and print the largest one.

// ? Manual: array & loop:

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int nums[100];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     int largest = nums[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (largest < nums[i])
//         {
//             largest = nums[i];
//         }
//     }

//     cout << largest << endl;

//     return 0;
// }

// ? STL: vector and library

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n); // vector for storing numbers

    for (int &num : nums) // for-each loop
    {
        cin >> num;
    }

    cout << *max_element(nums.begin(), nums.end()) << endl; // *max_element(nums.begin(), nums.end()) ----- this returns the actual value. max_element it points to where the largest number is located in the vector, but it doesn't hand you the number itself.

    return 0;
}