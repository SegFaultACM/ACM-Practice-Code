#include <stdio.h>
#include <string.h>
#include <stdlib.h>  
#define N 100001
int main() {
	char* str = (char*) malloc(sizeof(char)*N);
	while(scanf("%s", str) == 1){
		int len = strlen(str);
		if(str[len-1]==str[len-2] || (len == 1 && str[len-1] == '0')){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
    return 0;
}