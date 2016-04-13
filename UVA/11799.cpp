#include <cstdio>
using namespace std;

int T, cases=1, max;

int main(int argc, char const *argv[])
{
	scanf("%d", &T);
	while(T--){
		int present;
		max = 1;
		while(scanf("%d", &present)){
			char c = getchar();
			
			if(present > max)
				max = present;
			if (c == '\n' || c == '\0' || c == EOF)
				break;
		}
		printf("Case %d: %d\n",cases, max);
		cases++;
	}
	
	
	return 0;
}