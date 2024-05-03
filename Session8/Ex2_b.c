#include <stdio.h>
#include <string.h>

char* to_upper(char *s) {
	int i;
	for (i = 0; i < strlen(s); i++) {
		char c = s[i];
		if (c >= 'a' && c <= 'z') {
			s[i] = c - 32;
		}
	}
	return s;
}

int main() {
	char s[] = "Hello C Program Language";
	
	char *s1 = to_upper(s);
	
	puts(s1);
}

