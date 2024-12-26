#include <iostream>
using namespace std;
void soma(){
    int soma, i, num;
    cout<<"Digite um numero: (se 0, encerra o programa) ";
    cin>>num;
    soma=0;
    while(num != 0){
        i = num%10;
        soma = soma + i;
        num = num/10;
    }
    cout << soma;
}

int main(){
    soma();
    return 0;
}