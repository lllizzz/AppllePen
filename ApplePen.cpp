#include <string>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<char> letters;
    string word1;
    string word;
    cin >> word1;
    for (char i : word1)
    {
        if (!letters.contains(i))
        {
            letters.insert(i);
        }
    }
    while (cin >> word)
    {
        for (auto letter : letters)
        {
            if (word.find(letter) == std::string::npos)
            {
                letters.erase(letter);
            }
        }
    }
    for (auto letter : letters)
    {
        cout << letter;
    }
}