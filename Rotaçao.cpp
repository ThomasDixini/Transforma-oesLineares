#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float matrizCanonica[2][2];
	float matrizFinal[2][1];
	int x,y;
	float angulo;
	
	cout<<"Entre com o valor de X: ";
	cin>>x;
	
	cout<<"Entre com o valor de Y: ";
	cin>>y;
	
	cout<<"Entre com o valor do angulo em graus: ";
	cin>>angulo;
	
	angulo = angulo * (2 * acos(0.0))/180; //Angulo x Valor de pi / 180
	
	cout<<"\n";
	
	if(angulo > 0){
		matrizCanonica[0][0] = cos(angulo); //
		matrizCanonica[0][1] = -sin(angulo); // -------> | cos(angulo)  -sin(angulo) |
		matrizCanonica[1][0] = sin(angulo); //		  	 | sin(angulo)  cos(angulo)  |
		matrizCanonica[1][1] = cos(angulo); //
		
		matrizFinal[0][0] = x * matrizCanonica[0][0] + y*matrizCanonica[0][1];
		matrizFinal[1][0] = x * matrizCanonica[1][0] + y*matrizCanonica[1][1];
		
		for(int l = 0; l < 2; l++){
			for(int c = 0; c < 1; c++){
				cout<<"|"<<matrizFinal[l][c]<<"|"<<endl;
			}
		}
	} else {
		cout<< "Digite a com um numero maior que 0"<<endl;
	}
	
	
	return 0;
}