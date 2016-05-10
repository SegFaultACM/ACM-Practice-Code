#include <iostream>
#include <cstdio>
#include <cmath>
#include <queue>

using namespace std;
char mapa[3][4] = {{'.','.','.','#'},{'.','.','#','.'},{'#','.','#','.'}};
int cols = 3, rows = 4;
int suma = 0;
void cuenta(int i, int j){
	mapa[i][j] = '#';
	suma += 1;
	if(i+1 < cols && mapa[i+1][j] == '.')
		 cuenta(i+1,j) ;
	if(j+1 < rows && mapa[i][j+1] == '.')
		 cuenta(i,j+1) ;
	if(i-1 >= 0 && mapa[i-1][j] == '.')
		 cuenta(i-1,j) ;
	if(j-1 >= 0 && mapa[i][j-1] == '.')
		 cuenta(i,j-1) ;
	
	
	
}

int main(){
	while(scanf("%d %d",&cols, &rows )){
		if(cols&&rows){
			for (int x = 0; x < cols; x++)
			{
				for (int y = 0; y < rows; y++)
						{
							if(mapa[x][y] == '.'){
								suma = 0;
								cuenta(x,y);
								printf("%d\n", suma );
							}
						}	
			}
		} else{
			break;
		}
	}
	for (int x = 0; x < cols; x++)
	{
		for (int y = 0; y < rows; y++)
				{
					printf("%c ", mapa[x][y]);
				}
				printf("\n");		
	}

}