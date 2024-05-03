#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* remove_redundant_space(char *s) {
	int i;
	char s1,s2;
	char *result = (char*)malloc((strlen(s) + 1) * sizeof(char));
	int j = 0;
	for (i = 0; i < strlen(s); i++) {
		s1 = s[i];
		if (isspace(s1)) {
			s2 = s[i + 1];
			if (isspace(s2)) {
				continue;
			} else {
				result[j++] = s1;
			}
		} else {
			result[j++] = s1;
		}
	}
    result[j] = '\0';
	return result;
}

int main() {
	char s[] = "hello    c     program    language";
	
	char *s1 = remove_redundant_space(s);
	
	puts(s1);
}

