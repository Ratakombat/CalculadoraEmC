#include <stdio.h>
#include <windows.h>
char selectt;
float n1, n2;

void soma(float n1, char select, float n2);
void barrasHoriz(int qtd);
void loading(int tempo);
void menu();
void b();

int main(){

    menu();

    return 0;
}

void menu(){
    
    b(1);
    barrasHoriz(30);
    printf("\nCALCULADORA:");
    printf("\n+ Soma");
    printf("\n- Subtracao");
    printf("\n* Divisao");
    printf("\n/ Multiplicacao");
    printf("\n^ Potenciacao");
    printf("\n0-0 Sair");
    printf("\nExemplo: 10 / 2 = 5\n");
    barrasHoriz(30);


    printf("\nDigite: ");    
    scanf("%f %c %f", &n1, &selectt, &n2);
    if (n1 == 0 && selectt == '-' && n2 == 0)
    {
        for (int i = 0; i < 3; i++)
        {
           printf("\nSaindo...");
           Sleep(100);
           system("cls");

           printf("\nSaindo ..");
           Sleep(100);
           system("cls");

           printf("\nSaindo  .");
           Sleep(100);
           system("cls");

           printf("\nSaindo   ");
           Sleep(100);
           system("cls");

           printf("\nSaindo.  ");
           Sleep(100);
           system("cls");

           printf("\nSaindo.. ");
           Sleep(100);
           system("cls");
        }
        exit(0);
    }
    loading(2);
    printf("---->>>>");
    soma(n1, selectt, n2);
}





void soma(float n1, char select, float n2){
    float result;
    switch (select)
    {
    case '+':
            system("cls");
            result = n1 + n2;
            printf("%.2f + %.2f = %.2f", n1, n2, result);
            menu(); 
        break;

    case '-':
            system("cls");
            result = n1 - n2;
            printf("%.2f - %.2f = %.2f", n1, n2, result);
            menu(); 
        break;

    case '*':
            system("cls");
            result = n1 * n2;
            printf("%.2f * %.2f = %.2f", n1, n2, result);
            menu(); 
        break;

    case '/':
            system("cls");
            result = n1 / n2;
            printf("%.2f / %.2f = %.2f", n1, n2, result);
            menu(); 
        break;

    case '^':
            for (int i = 1; i < n2; i++)
            {
                n1 *= n1;
            }

            printf("%.2f", n1);

            menu(); 
        break;
    
    default:
        printf("\nTente Novamente!");
        menu();
        
    break;
    }
}



void barrasHoriz(int qtd){
    for(int i = 0; i < qtd; i++){
        printf("-");
    }
}

void loading(int tempo){
    for (int i = 0; i < tempo; i++)
    {
        printf("o-----");
        Sleep(100);
        system("cls");

        printf("-o----");
        Sleep(100);
        system("cls");

        printf("--o---");
        Sleep(100);
        system("cls");

        printf("---o--");
        Sleep(100);
        system("cls");

        printf("----o-");
        Sleep(100);
        system("cls");

        printf("-----o");
        Sleep(100);
        system("cls");

    }
    

}

void b(int quant){
    for (int i = 0; i < quant; i++)
    {
        printf("\n");
    }
}

