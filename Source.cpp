#include <iostream>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	char a;
	char keyboard[] = { "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./" };
	while (a = getchar())
	{
		if (a == EOF)
			break;
		if (a == '\n' || a == ' ')
			cout << a;
		else
			for (int i = 0; i < strlen(keyboard); i++)
				if (a == keyboard[i])
					cout << keyboard[i - 1];
	}
	return 0;
}