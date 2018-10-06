#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream input("input.txt");
    if (!input.is_open())
        exit(EXIT_FAILURE);
    
    string line;
    ofstream vowels("vowels.txt");
    ofstream consosnants("consonants.txt");

    while (std::getline(input, line))
    {
        stringstream sts(line);
        string word;
        while (sts >> word)
        {
            char letter = toupper(word[0]);
            if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
                vowels << word << " ";
            else
                consosnants << word << " ";
        }
    }

    input.close();
    consosnants.close();
    vowels.close();
}
