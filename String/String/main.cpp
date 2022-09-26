#include <iostream>

using namespace std;

int StrLen(const char* str)
{
	int Count = 0;
	while (str[Count] != '\0')
	{
		Count++;
	}
	return Count;
}
int main()
{
	const int BUF_SIZE = 100;
	char a[BUF_SIZE] = "Hellowefwwfw";
	cout << sizeof(a) << endl;
	cout << strlen(a) << endl;
	cout << StrLen(a) << endl;
	return 0;
}