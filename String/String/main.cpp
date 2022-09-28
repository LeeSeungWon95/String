#include <iostream>

using namespace std;

// ����1) ���ڿ� ���̸� ����ϴ� �Լ�
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

// ����2) ���ڿ� �����ϴ� �Լ�
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

// ����3) ���ڿ� �����̴� �Լ�
char* StrCat(char* dest, char* src)
{
	int Len = StrLen(dest);
	int i = 0;
	while (src[i] != '\0')
	{
		dest[Len + i] = src[i];
		i++;
	}
	dest[Len + i] = '\0';
	return dest;
}

// ����4) �� ���ڿ� ���ϴ� �Լ�
int StrCmp(char* a, char* b)
{
	int i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] > b[i])
		{
			return 1;
		}
		if (a[i] < b[i])
		{
			return -1;
		}
		i++;
	}
	return 0;
}

// ����5) ���ڿ��� ������ �Լ�
void ReverseStr(char* str)
{
	int Len = StrLen(str);
	int i = 0;
	while (i < Len / 2)
	{
		char temp = str[i];
		str[i] = str[Len - 1 - i];
		str[Len - 1 - i] = temp;
		i++;
	}
}

int main()
{
	const int BUF_SIZE = 100;
	char b[BUF_SIZE] = "Hello World";
	ReverseStr(b);
	cout << b << endl;
	return 0;
}