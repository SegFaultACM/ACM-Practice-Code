#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long lli;

lli gcd(lli a,lli b){return ( b == 0 ? a : gcd ( b , a % b ) ) ;}
lli lcm(lli a,lli b){return (a * (b / gcd(a, b)));}

int main(void){
	lli n1, d1, n2, d2;
	int tstCase = 0;
	while(scanf("%lli %lli %lli %lli",&d1,&n1,&d2,&n2)==4){
		if(n1 && d1 && n2 && d2){
			tstCase++;
			lli ns1 = n1 / gcd(n1,d1);
			lli ds1 = d1 / gcd(n1,d1);
			lli ns2 = n2 / gcd(n2,d2);
			lli = d2 / gcd(n2,d2);
			int lcmd = lcm(v1,v2);
			int vt = ((lcmd/v1)*d1)+((lcmd/v2)*d2);
			int dt = lcmd * 2;
		//simp
			int vfinal = vt/gcd(vt,dt);
			int dfinal = dt/gcd(vt,dt);


		} else{
			break;
		}
	}



}