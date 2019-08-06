#include <stdio.h>


int main() {
	char str[256];
	int comma_counter = 0;
	char c;
	for(int i = 0; i < 256; i++) {
		c = getchar();
		if(c == ',') {
			comma_counter++;
			if(comma_counter == 2) {
				i--;
				continue;
			}
		}
		if(c == '\n') {
			str[i] = '\0';
			break;
		}
		str[i] = c;
	}

	printf("%s\n", str);
	printf("%d запятых\n", comma_counter);
	return 0;
}
