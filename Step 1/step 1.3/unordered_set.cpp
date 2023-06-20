#include <bits/stdc++.h>

using namespace std;

int main()
{

    // define the unordered set
    unordered_set<int> s;

    // insert the  unordered set
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    // print the  unordered set
    cout << "Elements present in the unordered set: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // find the  unordered set
    int n = 2;
    if (s.find(n) != s.end())
        cout << n << " is present in unordered set" << endl;

    // erase the first element unordered set
    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // size check unordered set
    cout << "The size of the unordered set is: " << s.size() << endl;

    // unordered set is empty or not
    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    // clear the unordered set
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}