#include <stdio.h>
#include <string.h>
#define MAX 26

void CaesarCipher(char password[], int k) {
	int lenth = strlen(password);
	for(int i=0;i<lenth;i++) {
		if(password[i]+k>'z') {
			password[i]+=k-MAX;
		} else {
			password[i]+=k;
		}
	}
}

int main() {
	int len;
	char pwd[255];
	scanf("%d %s", &len, pwd);
	CaesarCipher(pwd, len);
	printf("%s", pwd);
	return 0;
}
