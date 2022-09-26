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

// 문제 2 문자열 복사하는 함수
char* StrCpy(char* dest, char* src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	const int BUF_SIZE = 100;
	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE];
	cout << StrCpy(b, a) << endl;

	return 0;
}