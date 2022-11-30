#include<iostream>
using namespace std;

void Key(char s[100], int l)
{
	int n = 0;
	int k = 0;
	char res[100];
	while (s[n] != '\0')
	{
		if (s[n] == ' ') k++;
		n++;
	}
	int dif = l - n - 1;
	int ins = dif / k;
	int ins_last = ins + dif % k;
	int is = 0, ir = 0, cur = 1, j;
	while (is < n)
	{
		if (s[is] == ' ')
		{
			if (cur < k)
			{
				for (j = 0; j < ins + 1; j++)
					res[ir + j] = ' ';
				ir += (ins + 1);
				cur++;
			}
			else
			{
				for (j = 0; j < ins_last + 1; j++)
					res[ir + j] = ' ';
				ir += (ins_last + 1);
			}
			is++;
		}
		else
		{
			res[ir] = s[is];
			ir++;
			is++;
		}
	}
	res[ir] = '\0';
	cout << endl;
	cout << "Output:\n";
	cout << res << endl;
}
int main()
{
	char s[100];
	cout << "Input:\n";
	cin.getline(s, 100);
	Key(s, 100);
	return 0;
}