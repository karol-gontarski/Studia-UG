#include <stdio.h>
#include <string.h>

int reverse();

char str;

int main()
{
    scanf("%s", &str);
	reverse();
    printf("Reversed string is: %s\n", str);

	return 0;
}

int reverse()
{
    
    for(int i=0; i<strlen(str)/2;i++){
    if (i < (strlen(str) / 2)) {
	char c;
	c = str[i];
	str[i] = str[strlen(str) - i - 1];
	str[strlen(str) - i - 1] = c;
    }
    }
    return 0;
}
