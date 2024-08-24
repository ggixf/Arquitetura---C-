#include<iostream>
#include <tgmath.h>
using namespace std;

int main(){
	int dec;
	int quoc;
	int resto;
	string bin = "00000000";
	cout<<"Digite um numero decimal: " <<endl;
	cin>> dec; 
	int i = bin.length()-1;
	
	do{
		quoc = dec / 2;
		resto = dec % 2;
		cout<<"Quoc: "<<quoc<< endl;
		cout<<"	Resto: "<<resto<<endl;
		if (resto == 1){
			bin[i] = '1';
		}	
		else{bin[i] = '0';
		}
		i--;
		dec = quoc;
		} while(quoc > 1);
		if(quoc == 1){
			bin[i] = '1';
		}else {
			bin[i] = '0';
		}
		cout<<"Resultado: "<<bin<<endl;
}
