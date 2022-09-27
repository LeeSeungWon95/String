#include <iostream>

using namespace std;

// 문제 1 문자열 길이를 출력하는 함수
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

// 문제 2 문자열 복사하는 함수
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

// 문제 3 문자열 덧붙이는 함수
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