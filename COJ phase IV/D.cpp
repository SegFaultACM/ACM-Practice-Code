#include <iostream>
#include <cstring>
typedef long long int lli;
using namespace std;
int main(void){
	lli length1,length2,cont = 0;
	string str1,str2;
	cin>>length1>>str1>>length2>>str2;
	bool pattern = false,band=true;
	for (lli i = 0,j=0; i < length1; i++)
	{
		if(str1[i]==str2[j]){
			j++;
			if(j==length2){
				pattern = true;
				j = 0;
			}
		}else{
			cont++;
		}
	}
	if(!pattern){
		cout<<"-1"<<endl;
	}else{
		cout<<cont<<endl;
	}
	return 0;
}