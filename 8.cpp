#include <iostream>
using namespace std;
void search(char s[], char s1[])
{

    int i = 0, j = 0, start = 0, s1_len = 0;
    while (s1[s1_len] != '\0')
    {
        s1_len++;
    }


    while (s[i] != '\0')
    {
        if (s[i] == s1[0])
        {
            start = i;
            for (j = 0; j < s1_len; j++)
            {
                if (s[i] != s1[j])
                {
                    i--;
                    break;
                }

                i++;

            }
        }

        if (j == s1_len)
        {
            break;
        }

        i++;

    }

    if (j != s1_len)
    {
        cout << "¬хождений не найдено." << endl;
    }
    else
        cout << "»ндекс первого вхождени€: " << start << endl;

}

int main()
{
    char s[100];
    char s1[100];
    cout << "¬ведите строку: ";
    gets(s);
    cout << "¬ведите подстроку: ";
    gets(s1);
    search(s, s1);
}
