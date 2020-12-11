
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    string hello = msg.at(0);

    for (const string& word : msg)
    {
        cout << word << " ";
        x = 20;
    }
    cout << endl;
}
