 #include <bits/stdc++.h>

using namespace std;

int main()
{


    // define theunordered multiset
    multiset<int> s;

    // insert the unordered multiset
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }
    s.insert(5);
    // print the  unordered multiset
    cout << "Elements present in the unordered multiset: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // find the unordered multiset
    int n = 2;
    if (s.find(n) != s.end())
        cout << n << " is present inunordered multiset" << endl;

    // erase the first elementunordered multiset
    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // size checkunordered multiset
    cout << "The size of theunordered multiset is: " << s.size() << endl;

    //unordered multiset is empty or not
    if (s.empty() == false)
        cout << "Theunordered multiset is not empty " << endl;
    else
        cout << "Theunordered multiset is empty" << endl;
    // clear theunordered multiset
    s.clear();
    cout << "Size of theunordered multiset after clearing all the elements: " << s.size();
}