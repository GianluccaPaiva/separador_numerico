# somador_numerico

A ideia do somador é uma função que recebe um numero inteiro e retorna a soma de todos os seus digitos.

Usei a ideia de: 
    num%10 ->retorna o digito final
    num//10 ->retorna o digito sem o final

Apliquei em function void para haver retorno impresso:

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

Porém, acho mais interessante e utilitário para outros projetos que precisa dessa lógica usar o conceito de return do que impressão, o que pode ser colocado na ideia:

    int soma(int num){
        int soma, i;
        soma=0;
        while(num != 0){
            i = num%10;
            soma = soma + i;
            num = num/10;
        }
        return soma;
    }


## English version

The idea of the adder is a function that receives an integer and returns the sum of all its digits.

I used the idea of:
    num%10 ->returns the final digit
    num//10 ->returns the digit without the final

Applied in function void to have return printed:

    void sum(){
        int sum, i, num;
        cout<<"Enter a number: (if 0, ends the program) ";
        cin>>num;
        sum=0;
        while(num != 0){
            i = num%10;
            sum = sum + i;
            num = num/10;
        }
        cout << sum;
    }

I think it's more interesting and useful for other projects that needs this logic use the concept of return instead of printing, which can be put into the idea:

    int sum(int num){
        int sum, i;
        sum=0;
        while(num != 0){
            i = num%10;
            sum = sum + i;
            num = num/10;
        }
        return sum;
    }       