#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* find_words(char *s, int *len) {
	int length = strlen(s);
	char *token;
	char *maxWords;
	int max; 
	int i = 0;
	for (token = strtok(s, " "); token != NULL; token = strtok(NULL, " ")) {
		if (i = 0) {
			max = strlen(token);
			maxWords = token;
		} else {
			if (strlen(token) > max) {
				max = strlen(token);
				maxWords = token;
			}
		}
		i++;
	}
	*len = max;
	return maxWords;
}

int main() {
	char s[] = "hello c program language";
	int len;
	char *s1 = find_words(s, &len);
	printf("Max words is '%s' and length is %d", s1, len);
}

