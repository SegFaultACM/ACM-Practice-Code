#include <cstdio>

int main(int argc, char const *argv[])
{
	int K,N,M,x,y;
	scanf("%d", &K);
	while(K != 0){
		scanf("%d %d", &N, &M);
		while(K--){
			scanf("%d %d", &x, &y);
			if(x == N || x == M || y == N || y == M ){
				printf("divisa\n");
			} else {
				if(x > N && y > M){
					printf("NE\n");
				} else if(x < N && y > M){
					printf("NO\n");
				} else if(x < N && y < M){
					printf("SO\n");
				} else if(x > N && y < M){
					printf("SE\n");
				} 
			}
		}
		scanf("%d", &K);
	}
	return 0;
}