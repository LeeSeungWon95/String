#include <iostream>

using namespace std;

// ���� 1 ���ڿ� ���̸� ����ϴ� �Լ�
int StrLen(const char* str)
{
	int Count = 0;
	while (str[Count] != '\0')
	{
		Count++;
	}
	return Count;
}
#pragma warning(disable : 4996)

// ���� 2 ���ڿ� �����ϴ� �Լ�
char* StrCpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return dest;
}

// ���� 3 ���ڿ� �����̴� �Լ�
char* StrCat(char* dest, char* src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
}

int main()
{
	const int BUF_SIZE = 100;
	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE] = "World";
	StrCat(a, b);
	cout << a << endl;
	return 0;
}