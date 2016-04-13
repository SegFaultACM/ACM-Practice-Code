#include <cstdio>

int main(int argc, char const *argv[])
{
	int K,a,b,c,cas=1;
	scanf("%d", &K);
	while(K--){
		scanf("%d %d %d", &a,&b,&c);
		if (a > b && a > c){
			if(b < c){
				printf("Case %d: %d\n", cas++, c);
			} else{
				printf("Case %d: %d\n", cas++, b);
			}
		} else if (b > a && b > c){
			if(a < c){
				printf("Case %d: %d\n", cas++, c);
			} else {
				printf("Case %d: %d\n", cas++, a);
			}
		} else {
			if( a < b){
				printf("Case %d: %d\n", cas++, b);
			} else {
				printf("Case %d: %d\n", cas++, a);
			}

		}
	}
	return 0;
}