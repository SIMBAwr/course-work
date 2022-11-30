#include <iostream>

// ������������ ����� �������� � ������
#define MAX_STRING_SIZE 40

using namespace std;

bool cmp(char s1[], char s2[]) {

    int s1_len = 0, s2_len = 0;
    int i = 0;

    //������� �������� ������� �����. ���� ������� �� �����, �� ����� ������� �� ������� ������ � 1
    while (s1[i] != '\0') {
        i++;
    }

    s1_len = i;
    i = 0;

    //����� 2
    while (s2[i] != '\0') {
        i++;
    }

    s2_len = i;
    i = 0;

    // �������� �� �������� ��������
    if (s1_len != s2_len) {
        return false;
    }
    else {
        // ���� ������� ����� �� �������� ������� � ������� �������� � ��������� �� �������� ������� ������ � ������ ������
        while (s1[i] != '\0' && s2[i] != '\0') {
            // ���� ������ �� ����� �� ������� �� �������
            if (tolower(s1[i]) == tolower(s2[i]))
                i++;
            else return false;
        }
    }

    return true;
}

int main() {
    char s1[MAX_STRING_SIZE];
    char s2[MAX_STRING_SIZE];

    cout << "Enter s1: " << endl;
    //gets_s ����� ����� �������� � �������
    gets(s1);
    cout << "Enter s2: " << endl;
    gets(s2);

    bool a = cmp(s1, s2);

    if (a == true) {
        cout << "s1 = s2" << endl;
    }
    else {
        cout << "s1 != s2" << endl;
    }

}
