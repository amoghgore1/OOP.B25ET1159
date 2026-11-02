#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    if (!fin)
    {
        cout << "Error opening source file!";
        return 1;
    }

    if (!fout)
    {
        cout << "Error opening destination file!";
        return 1;
    }

    char ch;

    while (fin.get(ch))
    {
        fout.put(ch);
    }

    cout << "File copied successfully!";

    fin.close();
    fout.close();

    return 0;
}
