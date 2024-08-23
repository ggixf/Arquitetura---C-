#include <iostream>
#include <tgmath.h>
using namespace std;

int main(){
	 string bin;
	 cout<<"Digite um numero binario: " <<endl;
	 cin>> bin; 
	 int bit;
	 int total=0;
	 int size = bin.length();
	 cout<<"Sizeof: "<<size << endl;
	 for (int i=0; i<size; i++){
	 	if (bin[i]=='0') {
	 		bit = 0;
		 }
		 else {
		 	bit = 1;
		 };
		 total += bit * pow(2,size-i-1);
	 }; 
	 cout <<total;
	 return 0;
}
