
// option 1
int countStr(char* str) {
	int i = 0;
	while (*str != '\0') {
		i++;
		str++;
	}
	return i;
}

int lastChar(char* str, char ch) {
	int i, size = countStr(str);
	for (int i = size - 1; i > -1; i--) {
		if (str[i] == ch) return i;
	}
	return -1;
}

//option 2
int fastCharNew(char* str, char ch) {
	char* last = NULL, head = str;
	int index = 1;
	while (*str != "\0") {
		if (*str == ch) {
			last = str;
		}
		str++;
	}
	if (last != null) {
		index = last - head; // return the adress of the last time of the letter
	}
}