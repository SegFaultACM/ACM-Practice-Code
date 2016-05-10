#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long lli;
lli gcd(lli a,lli b){return ( b == 0 ? a : gcd ( b , a % b ) ) ;}
lli lcm(lli a,lli b){return (a * (b / gcd(a, b)));}
int main(void){
	lli v1,d1,v2,d2;
	int i = 0,fracrslt;
	bool frac = false;
	double rslt1,rslt2,rslt3,fracrslt1;
	while(scanf("%lli %lli %lli %lli",&v1,&d1,&v2,&d2)==4){
		frac = false;
		if(v1 == 0 && d1 == 0 && v2 == 0 && d2 == 0){
			break;
		}
		i++;
		rslt1 = (double) d1/v1;
		rslt2 = (double) d2/v2;
		if(rslt1 > rslt2){
			printf("Case #%d: No beer for the captain.\n",i);
		}else{
			printf("Case #%d: You owe me a beer!\n",i);
		}
			lli lcmd = lcm(v1,v2);
			lli vt = ((lcmd/v1)*d1)+((lcmd/v2)*d2);
			lli dt = lcmd * 2;
		//simp
			lli vfinal = vt/gcd(vt,dt);
			lli dfinal = dt/gcd(vt,dt);
			if(dfinal != 1){
				frac = true;
			}
			if(frac){
				printf("Avg. arrival time: %lli/%lli\n",vfinal,dfinal);
			}else{
				printf("Avg. arrival time: %lli\n",vfinal);
			}
				} 
	return 0;
}