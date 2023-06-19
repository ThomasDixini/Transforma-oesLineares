#include <iostream>

using namespace std;

int main(){
	float matrizCanonica[2][2];
	float matrizFinal[2][1];
	int x,y;
	float a;
	
	cout<<"Entre com o valor de X: ";
	cin>>x;
	
	cout<<"Entre com o valor de Y: ";
	cin>>y;
	
	cout<<"Entre com o valor de a (a > 1 dilata,a < 1 contrai,a < 0 troca o sentido): ";
	cin>>a;
	
	matrizCanonica[0][0] = a; //
	matrizCanonica[0][1] = 0; // -------> | a  0 |
	matrizCanonica[1][0] = 0; //		  | 0  a |
	matrizCanonica[1][1] = a; //
	
	matrizFinal[0][0] = x * matrizCanonica[0][0] + y*matrizCanonica[0][1];
	matrizFinal[1][0] = x * matrizCanonica[1][0] + y*matrizCanonica[1][1];
	
	for(int l = 0; l < 2; l++){
		for(int c = 0; c < 1; c++){
			cout<<"|"<<matrizFinal[l][c]<<"|"<<endl;
		}
	}
	
	
	return 0;
}