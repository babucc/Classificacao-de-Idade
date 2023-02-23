#include <iostream>
#include <locale.h>

using namespace std;

float idade;

void  classificacao (float idade){	
	if (idade >= 1 && idade <= 5){
		cout<<"infantil" <<endl;
	}else if (idade >= 6 && idade <= 10){
		cout<<"Juvenil A" <<endl;
	}else if (idade >= 11 && idade <= 15){
		cout<<"Juvenil B" <<endl;
	}else if (idade >= 16 && idade <= 17){
		cout<<"Jovem" <<endl;
	}else if (idade >= 18 && idade <= 30){
		cout<<"Adulto" <<endl;
	}else if (idade > 30){
		cout<<"Master" <<endl;
	}
}

int main(){
	setlocale (LC_ALL, "portuguese");
	int idade;
	
	cout<<"Informe a sua idade: " ;
	cin>>idade;
	
	while (idade <= 0){
		cout<<"Idade inválida!" <<endl;
		cin>>idade;
	}	
	classificacao(idade);	
}
