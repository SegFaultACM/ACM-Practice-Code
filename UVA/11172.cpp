#include <cstdio>

int main(int argc, char const *argv[])
{
	int N,a,b;
	scanf("%d", &N);
	while(N--){
		scanf("%d %d", &a, &b);
		if(a > b){
			printf(">\n");
		} else if (a < b){
			printf("<\n");
		} else {
			printf("=\n");
		}
	}
	return 0;
}