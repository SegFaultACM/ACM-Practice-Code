#include <cstdio>
#define INFBORR 1<<30
using namespace std;

int N,B,H,W;
//precio, camas.

int _pM = INFBORR ;
int main(int argc, char const *argv[])
{
	while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF){
		_pM = INFBORR;
		while(H--){
			int precio;
			scanf("%d", &precio);
			int contador = W;
			while(contador--){
				int cama;
				scanf("%d",&cama);
				int tempCP = N*precio;
				if(cama >= N && tempCP <= B){
					if(_pM > tempCP){
						_pM = tempCP;
					}
				}
			}
		}
		if(_pM <= B){
			printf("%d\n", _pM);
		} else {
			printf("stay home\n");
		}
		
	}
	return 0;
}