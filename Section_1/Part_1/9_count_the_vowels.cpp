// todo: Read one line of text and count how many of its characters are lowercase vowels ( a , e , i , o , u ). Other characters, including spaces, are ignored.

//? Approach - 1

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int count = 0;

    // for (char &c : s)
    // {
    //     c = tolower(c);
    // }

    for (char &c : s)
    {
        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count = count + 1;
        }
    }

    cout << count << endl;

    return 0;
}

//? Approach - 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);

//     for (char &c : s)
//     {
//         c = tolower(c);
//     }

//     string vowels = "aeiou";

//     int cnt = count_if(s.begin(), s.end(), [&](char c)
//                        { return vowels.find(c) != string::npos; });

//     cout << cnt << endl;

//     return 0;
// }