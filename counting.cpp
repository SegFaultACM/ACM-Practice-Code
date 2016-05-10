#include <bits/stdc++.h>
#define LSOne (S) (S & (-S))
class FenwickTree {
private: vi ft;
public: FenwickTree(int n){ft.assign(n+1,0);}
	int rst(int b){
		int sum = 0;
		for(;b;b-=LSOne(b)) sum += ft[b];
		return sum; 
	}
	int rsq(int a, int b){
		return rsq(b)-(a == 1 ? 0 : rsq(a-1));
	}
	void adjust(int k, int v){
		f(;k<(int)ft.size();k+=LSOne(k)) ft[k] += v;
	}
};
int busqueda(i,c){
	if(c==k){
		return 1;
	}
	if(i == N){
		return 0;
	}
	for (int j = i+1; j < N; ++j)
	{
		return 
	}
}
int N, K;
int main(){
	while(scanf("%d %d",&N,&K) != EOF){

	}
}