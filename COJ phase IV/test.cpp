#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
typedef long long int ulli;
ulli gcd(ulli a,ulli b){return ( b == 0 ? a : gcd ( b , a % b ) ) ;}
ulli lcm(ulli a,ulli b){return (a * (b / gcd(a, b)));}

int main(){
	int a, b;
	cin >> a >> b;
	cout << gcd(a,b) << " "<< lcm(a,b) << endl;
}


