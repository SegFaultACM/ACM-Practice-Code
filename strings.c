#include <stdio.h>
#include <string.h>
#include <stdlib.h>  
#define N 1000001
int main() {
	char* str;
	str = (char*) malloc(sizeof(char)*N);
	int n,i,j,len,r;
	while(scanf("%s %d",str,&n)==2){
		len = strlen(str);
		for(r = 0; r< n;r++){
			scanf("%d %d",&i,&j);
			printf("%c\n",str[((i+j)-2)%len]);
		}
	}
    return 0;
}