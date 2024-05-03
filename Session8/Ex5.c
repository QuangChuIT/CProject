#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void print_words(char *s) {
	int length = strlen(s);
	char *result = (char*)malloc((length + 1) * sizeof(char));
	strcpy(result, s);
	char *token;
	for (token = strtok(result, " "); token != NULL; token = strtok(NULL, " ")) {
		printf("%s\n", token);
	}
	free(result);
}

int main() {
	char s[] = "hello c program language";
	
	print_words(s);
}

