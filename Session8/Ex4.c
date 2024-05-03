#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_words(char *s) {
	int length = strlen(s);
	int count = 0;
	char *token;
	for (token = strtok(s, " "); token != NULL; token = strtok(NULL, " ")) {
		count++;
	}
	return count;
}

int main() {
	char s[] = "hello c program language";
	
	int cnt = count_words(s);
	printf("%d", cnt);
}

