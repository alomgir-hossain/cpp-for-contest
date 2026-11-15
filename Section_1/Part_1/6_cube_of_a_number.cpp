// todo: Write a function cube that returns x*x*x and use it to print the cube of the number you read.

#include <iostream>
using namespace std;

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int n;
    cin >> n;

    int num = cube(n);

    cout << num << endl;
    
    return 0;
}