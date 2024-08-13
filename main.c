#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char ch;
int a,b,s,result=0;
// char s[50];
// int n,m;
// int rows=4, cols=80;

void input(){
    printf("Enter the operation \n 1- to add\n 2- to sub\n 3- to mult\n 4- to divide\n 5-to percentile\n 6-to quit\n");
    scanf("%d",&s);
    printf("Enter operands a and b\n");
    scanf("%d %d",&a,&b);
}
void clearScreen() {
    system("cls");
}
void add(int a, int b){
    clearScreen();
    result += a+b;
    printf("Result:%d \n",result);
    input();
}
void subtract(int a, int b){
    clearScreen();
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         // if(i==0 || i == rows-1 ){ 
    //         // printf("*");
    //         // }
    //         // else printf(" ");
    //     }
    //     printf("\n");
    // }
    result -= (a-b);
    printf("Result:%d\n",result);
    input();
}
void multiply(int a, int b){
    clearScreen();
    result *= (a*b);
    printf("Result:%d\n",result);
    input();
}
void divide(int a, int b){
    clearScreen();
    if(b!=0){
        result /= (a/b);
    printf("Result:%d\n",result);
    }
    else
    printf("Invalid");
    input();
}
void percentile(int a, int b){
    clearScreen();
    if(b!=0){
        result %= (a%b);
    printf("Result:%d\n",result);
    }
    else
    printf("Invalid");
    input();
}
void quit(){
    clearScreen();
    printf("The program ended.");
}

int main(){
    input();
    do{
    switch(s){
        case 1: add(a,b);
        break;
        case 2: subtract(a,b);
        break;
        case 3: multiply(a,b);
        break;
        case 4: divide(a,b);
        break;
        case 5: percentile(a,b);
        break;
        case 6: quit(a,b);
        break;
        default:
        printf("Error: Invalid operator\n");
    }
    }while( s != 6);
    if(s == 6) {quit();}
   
        return 0;
}
