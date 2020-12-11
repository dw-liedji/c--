
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
        int x = 20;
        double valeur = 25;
        string name = "liedji wenkack dagobert";
        string name = "odile koom je t'aime et toi ?";
    }
    cout << endl;
}
