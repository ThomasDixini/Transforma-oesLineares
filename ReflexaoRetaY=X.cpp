#include <iostream>

using namespace std;

int main(){
	int matrizCanonica[2][2];
	int matrizFinal[2][1];
	int x,y;
	
	matrizCanonica[0][0] = 0; //
	matrizCanonica[0][1] = 1; // -------> | 0  1 |
	matrizCanonica[1][0] = 1; //		  | 1  0 |
	matrizCanonica[1][1] = 0; //
	
	cout<<"Entre com o valor de X: ";
	cin>>x;
	
	cout<<"Entre com o valor de Y: ";
	cin>>y;
	
	matrizFinal[0][0] = x * matrizCanonica[0][0] + y*matrizCanonica[0][1];
	matrizFinal[1][0] = x * matrizCanonica[1][0] + y*matrizCanonica[1][1];
	
	for(int l = 0; l < 2; l++){
		for(int c = 0; c < 1; c++){
			cout<<"|"<<matrizFinal[l][c]<<"|"<<endl;
		}
	}
	
	
	return 0;
}