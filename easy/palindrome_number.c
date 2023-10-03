#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool isPalindrome(int x){
	char str[15];
	sprintf(str, "%d", x);
	int length = strlen(str) - 1;

	for(int i = 0; i < length; i++){
		if(str[i] != str[length-i]){
			return false;
		}
	}

	return true;
}

int main(){
	int x = 121;
	printf("%d ", isPalindrome(x));

	return 0;
}