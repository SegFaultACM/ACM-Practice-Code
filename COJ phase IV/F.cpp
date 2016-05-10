#include <cstdio>
using namespace std;

int main(){
	long long int a;
	scanf("%lli", &a);
	while (a != 0){
		if( a == 1) {
			printf("0\n");
		}
		else if(a == 2 ) {
			printf("0\n");
		}else{
			printf("%lli\n",(a-2)*12);
		}
		scanf("%lli", &a);
	}
}