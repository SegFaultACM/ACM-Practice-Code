#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
typedef long long int ulli;
ulli gcd(ulli a,ulli b){return ( b == 0 ? a : gcd ( b , a % b ) ) ;}
ulli lcm(ulli a,ulli b){return (a * (b / gcd(a, b)));}

int main(){
	ulli test;
	cin>>test;
	ulli cont;
	while(test--){
		ulli a,b;
		cin>>a>>b;
		if(gcd(a,b)==lcm(a,b)){
			cont++;
		}
	}
	cout<<cont;
}