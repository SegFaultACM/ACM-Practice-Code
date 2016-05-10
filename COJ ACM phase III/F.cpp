#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int N,Cas,Dado;
		scanf("%d %d %d", &N, &Cas, &Dado);
		int Casillas[Cas];
		int Dices[Dado];
		for (int i = 0; i < Cas; i++)
		{
			scanf("%d", &Casillas[i]);
		}

		for (int i = 0; i < Dado; i++)
		{
			scanf("%d", &Dices[i]);
		}
		vector<pair<int,int> > jugadores(N);
		for(int i = 0; i < N; i++){
			jugadores[i] = make_pair(i+1,0);
		}
		for (int i = 0,j = 0; i < Dado; i++)
		{
			int r = 0;
			while(jugadores[j].second == Cas-1 || j >= N-1){
				j++;
				if(j >= N-1){
					j = 0;
				}
				
			}
			jugadores[j].second+=Dices[i];
			jugadores[j].second+=Casillas[jugadores[j].second];
			if(jugadores[j].second == Cas-1){
				printf("%d ",jugadores[j].first);
			}
			j++;
		}
	}
}