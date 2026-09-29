// ARRAY-SEARCH-NAMES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string names[5] = { "OSAMA","ISRA","HANS","PETER","ARAS" };
    string s_name;
    int x = 2;
    cout << " ENTER THE NAME ";
    cin >> s_name;
    for (int i = 0; i <= 5; ++i)
    {
        cout << " AT ITERATION : " << i << endl;
        if (s_name == names[i])
        {
            x = 1;
            cout <<"' "<< s_name<<" '" << " THE VALUE AT ITERATION " << i << endl;
            break;
        }
        else if (s_name!=names[i])
        {
            x = 0;
        }
    }
    if (x == 0)
    {
        cout << " THE VALUE IS NOT FOUND...";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
