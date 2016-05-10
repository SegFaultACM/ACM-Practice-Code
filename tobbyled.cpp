#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int size,t;
	char dir;
	while(scanf("%d %d %c",&size, &t,&dir)==3){
		t = t%size;
	}
}