#include <cstdio>
#include <cstring>
#include <cmath>
#define MAXTEST 100002
using namespace std;
short queries[MAXTEST];
short arr[MAXTEST];
int repetidos[10];
int n;
void buildMatrix(){
	queries[0] = 1;
	for (int i = 0; i < 10; ++i)
	{
		repetidos[i] = 0;
	}
	repetidos[arr[0]]=1;
	for (int i = 1; i < n; ++i)
	{
		if(repetidos[arr[i]] == 0){
			queries[i] = queries[i-1]+1;
			repetidos[arr[i]] = 1;
		}else{
			queries[i] = queries[i-1]	;
			continue;
		}

	}
	/*for (int i = 1; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if(i == j){
				queries[i][j] = 1;
			}else{
				if(queries[i-1][j-1]!=queries[i-1][j]){
					queries[i][j] = queries[i][j-1]+1;
				}else{
					queries[i][j] = queries[i][j-1];
				}
			}

		}
	}*/
}
int main(){
	int q; 
	while(scanf("%d",&n)==1){
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&arr[i]);
		}
		buildMatrix();
		scanf("%d",&q);
		int init, fin;
		for (int i = 0; i < n; ++i)
		{
			//printf("%d\n",queries[0][i]);
		}
		for (int i = 0; i < q; ++i)
		{
			scanf("%d %d",&init, &fin);
			//printf("init: %d  fin: %d\n",queries[0][init],queries[0][fin] );
			int resta = queries[fin-1]-queries[init-1];
			if(queries<0){
				resta = resta*-1;
			}


			printf("%d\n",resta+1);
		}
	}
}
