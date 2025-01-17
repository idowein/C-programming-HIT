#define _CRT_SECURE_NO_WARNINGS

/*Libraries*/
#include <stdio.h>
#include <math.h>

void find(char* str, char ch) {
	char small = ch, big =(ch - 'a') + 'A';
	while (*str != 0) {
		if (*str == small || *str == big) {
			print(str);
			}
		str = getNext(str);
	}
}

char* getNext(char* str) {
	while (*str != '\0') {
		if (*str == ' ') {
			return (str+1);
		}
		str++;
	}
	return str;
}

void main() {

}