#include <stdio.h> 
#include <locale.h> // biblioteca que fornece funções e definições relacionadas à formatação de localização, como idioma, formato de números, datas e moedas, de acordo com as configurações regionais do sistema.

void main () {
    setlocale(LC_ALL, "Portuguese"); 
    printf("C é \n\"SUPER\" \nfácil!");
}

/*
\n - nova linha
\t - tubulação (tab)
\b - backspace
\r - retorno
\\ - barra
\" - aspas
\? - interrrogação
\a ou \7 - beep
%% - porcentagem

*/