#include <stdio.h>
#include <string.h>

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000


int romanToInt(char * s){
	int sum = 0;
	int length = strlen(s);

	for(int i = 0; i < length; i++){
		switch(s[i]){
			case 'I': sum += I; break;
			case 'V': sum += V; break;
			case 'X': sum += X; break;
			case 'L': sum += L; break;
			case 'C': sum += C; break;
			case 'D': sum += D; break;
			case 'M': sum += M; break;
			default: return -1;
		}
		if(s[i] == 'I' && ((s[i+1] == 'V') || (s[i+1] == 'X'))){
			sum -= 2;
		}
		else if(s[i] == 'X' && ((s[i+1] == 'L') || (s[i+1] == 'C'))){
			sum -= 20;
		}
		else if(s[i] == 'C' && ((s[i+1] == 'D') || (s[i+1] == 'M'))){
			sum -= 200;
		}
	}

	return sum;
}


int main(){
	char str[15] = "MCMXCIV";
	printf("%d ", romanToInt(str));
	return 0;
}