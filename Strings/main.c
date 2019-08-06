#include <stdio.h>

//Удалить все вхождения символов s2 из строки s1
void squeeze(char s1[], char s2[]) {
	printf("\nИсходная строка: %s\nСимволы  для удаления: %s\n", s1, s2);

	int i = 0;
	int count = 0;
	while(s2[i] != '\0') {
		printf("\nTo delete: %c\n", s2[i]);

		int j = 0;
		while(s1[j] != '\0') {
			if(s2[i] == s1[j]) {
				int t = j;
				printf("Deleting: %c from pos %2d", s1[t], j+1);
				while(s1[t] != '\0'){
					s1[t] = s1[t+1];
					t++;
				}
				printf("\ti: %2d j: %2d t: %2d", i, j, t);
				printf("\tPre result: %s\n", s1);
				
				count++;
				continue;
			}
			j++;
		}
		i++;
	}
	printf("\nResult: %s\nin %d iterations \n", s1, count);
}

int main()
{	
	char s1[] = "polska kurwa lalka soooooka kal";
	char s2[] = "kloa";
	//printf("String len: %lu\n", (sizeof(s1) / sizeof(char) - 1));
	squeeze(s1, s2);
	return 0;
}
