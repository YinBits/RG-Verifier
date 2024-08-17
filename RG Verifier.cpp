#include <iostream>
using namespace std;

int main(){
	
	string rg;
	cout << "Digite seu RG: ";
	cin >> rg;
	if (rg.length() != 12){
    	cout << "RG invalido " << endl;
	}
	string str;	
	str = rg.substr(0, 2);
  	str = str + rg.substr(3, 3);
  	str = str + rg.substr(7, 3);



	//Calculo de RG
	int mult = 9, i, soma=0;
	
	for(i=0; i<str.length(); i++){
		soma += (mult*(str[i]-'0'));
		mult--;
	}
	
	int resto = soma%11;
	
	
	int valorDig;
	// CASO DIGITO FOR X
	if(rg[11] == 'x' || rg[11] == 'X'){
		valorDig = 10;
	}else{
		 valorDig = rg[11] - '0';
	}
	
	if(valorDig == resto){
		cout << "RG VALIDO";
		
		}else{
			cout << "RG INVALIDO";
		}
		
		return 0;
		
	
	}