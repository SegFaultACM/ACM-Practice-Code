#include <cstdio>
using namespace std;

int H;
double U,D,F;
int main(int argc, char const *argv[])
{
	while(scanf("%d %lf %lf %lf",&H,&U,&D,&F), (H != 0)){
		double fatigue = U*(F/100.00);
		double currentAltura = 0;
		int days = 0;
		while(1){
			days++;
			currentAltura += U;
			if(currentAltura > H){
				printf("success on day %d\n", days);
				break;
			}
			currentAltura -= D;
			if(currentAltura < 0){
				printf("failure on day %d\n", days);
				break;
			}
			U -= fatigue;
			if(U<0) U = 0;

		} 
		if(currentAltura <= 0){
			
		} else {
			
		}

	}
	
	return 0;
}