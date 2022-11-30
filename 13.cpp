#include <iostream>
using namespace std;

int findword(const char* s, const char* w)
{
    for (int i = 0;;)
    {
        while (s[i] != w[0])
        {
            if (s[i] == '\0') return -1;
            else ++i;
        }

        int i_i = ++i;
        int j = 1;

        while (s[i] == w[j] && s[i] != '\0')
        {
            ++i, ++j;
        }

        if (s[i] == ' ' || s[i] == '\0' && w[j] == '\0')
            return i_i;

        i = i_i;
    }
}

int main()
{
    char s[256];
    char w[256];


    cout << "enter str" << endl;
    cin.getline(s, 256);
    cout << "enter word" << endl;
    cin.getline(w, 256);


    if (findword(s, w) > 0) {
        cout << "Word on position: " << findword(s, w) << endl;
    }
    else 	cout << "Not found" << endl;

    return 0;

}