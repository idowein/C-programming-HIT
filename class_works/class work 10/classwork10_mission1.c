#define _CRT_SECURE_NO_WARNINGS

/*Libraries*/
#include <stdio.h>
#include <math.h>
#include <str.io>

char* getNextWord(char* str) {
	/*Getting the next word*/
	while (*str != '\0' || *str != ' ') {
		str++;
	}
	while (*str == ' ') {
		str++;
	}
	return str;
}

char* getLast(char* str) {
	while (*str != '\0' && *str != ' ') {
		str++;
	}
	return str;
}

void removeSpaces(char* str) {
	char* next, last, temp;
	while (*str != '\0') {
		last = getLast(str);
		if (last != '\0') {
			return;
		}
	}
	next = getNextWord(str);
	temp = next;
	while (next != '\0' && next != ' ') {
		*last = *next;
		next++;
		last++;
	}
	str = temp;
}

void main() {

}