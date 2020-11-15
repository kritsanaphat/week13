#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i = 0;
int chk(char* str) {
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int chkstr(char* str, int* num) {
	for (int j = 0; j < i; j++) {
		for (int y = 97; y < 122; y++) {
			if (str[j] == y) {
				num[y]++;
			}
		}
	}
	return 0;
}


int main() {
	int m = 0;
	int num[256] = { 0 };
	char str[256];
	int x;
	int k;
	int z =-1;
	int j = 0;
	scanf("%[^\n]", str);
	chk(str);
	chkstr(str, num);

	for (k = 97; k < 122; k++) {
		if (num[k] >= z && num[k]!=0) {
			if (num[k] > z) {
				z = num[k];
				m = k;
			}
			else {
				j = 1; //ERROR
			}
		}
	}
	for (int p = 0; p < k; p++) {
		if (str[p] >= 97 && str[p] <= 127) {

		}
		else j = 1; //ERROR
	}
	if (j == 0) {
		printf("%c\n", m);
		printf("%d", z);
	}
	else printf("ERROR");
}