#include <cstdio>
#include <cmath>
using namespace std;
typedef unsigned long long int lli;
int main(){
	lli a, b;	
	scanf("%lli %lli", &a,&b);
	while (a != 0 && b != 0){
		lli c, d;
		c = (b-a)+1;		
		a = floor(sqrt(a-1));
		b = floor(sqrt(b));
		d = b-a;
		c = c-d;
		printf("%lli\n", c);
		scanf("%lli %lli", &a,&b);
	}

}