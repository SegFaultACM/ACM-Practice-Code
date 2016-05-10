#include <cfloat>
#include <cstdio>
#include <cstring>
#include <cmath>
#define MAXTEST 100002
using namespace std;

int main(){
	long long int n;
	while((scanf("%lli",&n)==1) && n != 0){
		double sum = 0;
		for (int i = 1; i <= n*2; i+=2)
		{
			sum += pow(i-n,2);
		}
		sum = (n*(n+1)*(2*n+1))/6;
		double tot = sqrt((sum-(sqrt(n)))/(n-1));
		printf("%f\n", tot);

	}
}