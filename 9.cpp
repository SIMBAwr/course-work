#include <iostream>
using namespace std;
#define MAX_STRING_SIZE 40
void start_end(char s[], char s1[])
{
	int start = 0, end = 0, len = 0; while (s1[len] != '\0') {
		len++;
	}
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == s1[0]) {
			start = i;
			int j = 0;
			while (j < len && s[i] == s1[j]) {
				i++;
				j++;
			}
			if (j == len) {
				end = i;
				break;
			}
			else {
				start = 0;
				end = 0;
			}
		}
	}
	if (end != 0) {
		cout << "Старт: " << start << endl;
		cout << "Конец: " << end << endl;
	}
	else {
		cout << "-" << endl;
	}
}
int main()
{
	char s[MAX_STRING_SIZE];
	char s1[MAX_STRING_SIZE];
	cout << "ввод строки: ";
	gets(s);
	cout << "подстрока: ";
	gets(s1);
	start_end(s, s1);
}
