#include <cstdio>
#include <algorithm>
typedef unsigned long long int ulli;
using namespace std;

int main(){
	ulli a,b;
	while (scanf("%lli %lli", &a, &b) == 2 && a != 0 && b != 0 ){
		if(a < 3 || b < 3){
			ulli c = min(a,b);
			ulli d = max(a,b);
			if(c == 1){
				printf("%lli\n", (d*d)-3*d+2);
			} else if(c == 2){
				ulli x = a*b;
				printf("%lli\n", ((x*x)-(6*x))+8);
			}
		} else{
			ulli x = a*b;
			ulli resultado = 4*(x-4) + (2*( (a-2)+(b-2) )*(x-6) ) + (a-2)*(b-2)*(x-9); 
			printf("%lli\n", resultado);
		}
	}



}