#include <stdio.h>
#include <string.h>

char* to_lower(char *s) {
	int i;
	for (i = 0; i < strlen(s); i++) {
		char c = s[i];
		if (c >= 'A' && c <= 'Z') {
			s[i] = c + 32;
		}
	}
	return s;
}

int main() {
	char s[300] = "Hello C Program Language";
	char *s1 = to_lower(s);
	printf("%s", s1);
}
