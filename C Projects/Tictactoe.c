//Created by Achyuta Shrimate
//Date - 28/07/24

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int ran(){
    srand(time(NULL));
    int rannum = rand() % (2) + 1;
    return rannum;
}

void check_replace(char *TT, char *in, int *turn){
    //printf("\nEntered check_replace");
    if(*in == '1' || *in == '2' || *in == '3' || *in == '4' || *in == '5' || *in == '6' || *in == '7' || *in == '8' || *in == '9')
    {
        //printf("\nInside if (1)");
        if((*turn%2)==0)
        {
            //printf("\nInside if (2)");
            switch (*in)
            {
            case '1':
                //printf("\nInside switch case");
                *TT = 'O';
                break;
            case '2':
                *(TT+1) = 'O';
                break;
            case '3':
                *(TT+2) = 'O';
                break;
            case '4':
                *(TT+3) = 'O';
                break;
            case '5':
                *(TT+4) = 'O';
                break;
            case '6':
                *(TT+5) = 'O';
                break;
            case '7':
                *(TT+6) = 'O';
                break;
            case '8':
                *(TT+7) = 'O';
                break;
            case '9':
                *(TT+8) = 'O';
                break;
            }
        }
        else
        {
            //printf("\nInside if (2)");
            switch (*in)
            {
            case '1':
                //printf("\nInside switch case");
                *TT = 'X';
                break;
            case '2':
                *(TT+1) = 'X';
                break;
            case '3':
                *(TT+2) = 'X';
                break;
            case '4':
                *(TT+3) = 'X';
                break;
            case '5':
                *(TT+4) = 'X';
                break;
            case '6':
                *(TT+5) = 'X';
                break;
            case '7':
                *(TT+6) = 'X';
                break;
            case '8':
                *(TT+7) = 'X';
                break;
            case '9':
                *(TT+8) = 'X';
                break;
            }
        }
    }
    else
    {
        printf("\n Either the place is used up or your input is wrong or out of range");
    }
    printf("\n|---|---|---|\n| %c | %c | %c |\n|---|---|---|\n| %c | %c | %c |\n|---|---|---|\n| %c | %c | %c |\n|---|---|---|", TT[0],TT[1],TT[2],TT[3],TT[4],TT[5],TT[6],TT[7],TT[8]);
}

bool wincheck(char *T){
    if((*T == 'X'&&*(T+1) == 'X'&&*(T+2) == 'X')||(*T == 'X'&&*(T+3) == 'X'&&*(T+6) == 'X')||(*T == 'X'&&*(T+4) == 'X'&&*(T+8) == 'X')||(*(T+1) == 'X'&&*(T+4) == 'X'&&*(T+7) == 'X')||(*(T+3) == 'X'&&*(T+4) == 'X'&&*(T+5) == 'X')||(*(T+2) == 'X'&&*(T+4) == 'X'&&*(T+6) == 'X')||(*(T+6) == 'X'&&*(T+7) == 'X'&&*(T+8) == 'X')||(*(T+2) == 'X'&&*(T+5) == 'X'&&*(T+8) == 'X')){
        return true;
    }
    else if((*T == 'O'&&*(T+1) == 'O'&&*(T+2) == 'O')||(*T == 'O'&&*(T+3) == 'O'&&*(T+6) == 'O')||(*T == 'O'&&*(T+4) == 'O'&&*(T+8) == 'O')||(*(T+1) == 'O'&&*(T+4) == 'O'&&*(T+7) == 'O')||(*(T+3) == 'O'&&*(T+4) == 'O'&&*(T+5) == 'O')||(*(T+2) == 'O'&&*(T+4) == 'O'&&*(T+6) == 'O')||(*(T+6) == 'O'&&*(T+7) == 'O'&&*(T+8) == 'O')||(*(T+2) == 'O'&&*(T+5) == 'O'&&*(T+8) == 'O')){
        return true;
    }
    else{
        return false;
    }
}

void tictactoe(char per1[100], char per2[100]){
    char TTT[9] = "123456789";
    char input;
    int tu;
    printf("\nYour board is here:\n");
    printf("\n|---|---|---|\n| %c | %c | %c |\n|---|---|---|\n| %c | %c | %c |\n|---|---|---|\n| %c | %c | %c |\n|---|---|---|", TTT[0],TTT[1],TTT[2],TTT[3],TTT[4],TTT[5],TTT[6],TTT[7],TTT[8]);
    printf("\nPlayer 1 - %s", per1);
    printf("\nPlayer 2 - %s", per2);
    printf("\n\nThis is completely unbaised random choice of starting player using the random number generator of math class/header file");
    if(ran() == 1)
    {
        printf("\nCongratulations, %s You will begin this round of tic tac toe", per1);
        for(tu=1; tu<=9; tu++){
            if((tu%2)==0)
            {
                printf("\n%s it's your turn:\n", per2);
                scanf(" %c", &input);
                //printf("\nInput accepted:");
                check_replace(TTT, &input, &tu);
            }
            else
            {
                printf("\n%s it's your turn:\n", per1);
                scanf(" %c", &input);
                //printf("\nInput accepted:");
                check_replace(TTT, &input, &tu);
            }
            if(wincheck(TTT)){
                break;
            }
        }
    }
    else
    {
        printf("\nCongratulations, %s You will begin this round of tic tac toe", per2);
        for(tu=1; tu<=9; tu++){
            if((tu%2)==0)
            {
                printf("\n%s it's your turn:\n", per1);
                scanf(" %c", &input);
                //printf("\nInput accepted:");
                check_replace(TTT, &input, &tu);
            }
            else
            {
                printf("\n%s it's your turn:\n", per2);
                scanf(" %c", &input);
                //printf("\nInput accepted:");
                check_replace(TTT, &input, &tu);
            }
            if(wincheck(TTT)){
                break;
            }
        }
    }
    if(wincheck(TTT)){
        if((tu%2)==0){
            printf("\n Congratulations, %s you won this round of tic tac toe", per2);
        }
        else{
            printf("\n Congratulations, %s you won this round of tic tac toe", per1);
        }
    }
    else{
        printf("\n It's a draw");
    }
}

int main(){
    //Player deicding
    char p1[100], p2[100], ch;
    printf("\nEnter player names:\n");
    fgets(p1, 100, stdin); //Player 1 name
    fgets(p2, 100, stdin); //Player 2 name
    //Game loop
    do{
        tictactoe(p1,p2);
        printf("\nDo you want to play again ?\nY/N\n\n");
        scanf(" %c", &ch);
    }while(ch == 'Y'|| ch == 'y');
    return 0;
}