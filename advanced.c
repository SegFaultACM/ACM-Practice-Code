#include <math.h>
#include <stdio.h>
#define digg 10000000000

int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n)  && n != 0){
		long long int p4 = pow(n,4)%digg;
		long long int p3 = (2*pow(n,3))%digg;
		long long int p2 = pow(n,2)%digg;
		long long int rst = (p4+p3+p2)&digg;
		rst = (rst/4)%digg;
		printf("%lli\n", rst);
	}
	return 0;
}