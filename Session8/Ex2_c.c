#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* convertFistLetterToUpper(char *s) {
	int i;
	for (i = 0; i < strlen(s); i++) {
			if (i == 0) {
			printf("%c\n", s[i]);
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] = s[i] - 32;
			}
		} else {
			if (isspace(s[i])) {
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z') {
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return s;
}

int main() {
	char s[] = "hello c program language";
	
	char *s1 = convertFistLetterToUpper(s);
	
	puts(s1);
}

