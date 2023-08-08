#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int count(string text)
{
    int words=0;
    stringstream totalwords (text);
    string word;

    while (totalwords >> word)
    {
        words++;
    }

    return words;
}

int main()
{
    string NameofFile;
    cout << "Enter the name of the file with extension: ";
    getline (cin, NameofFile);

    ifstream file(NameofFile);

    if (!file)
    {
        cout << "Error!! This file is not opening." << "\n";
    }

    string content;
    string line;

    while (getline(file, line))
    {
        content += line + "";
    }

    int wordCount = count(content);

    cout<<"Total words in this file are: " <<wordCount << "\n";
    file.close();

    return 0;
}
