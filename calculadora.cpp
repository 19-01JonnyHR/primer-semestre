#include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void imprimir_menu();
 void leer_opcion(int &opt);
 int leer_valor(){
     int temp;
     printf("introduce el valor:");
     scanf("%d",&temp);
     return temp;
 }
 int divicion(int x, int& y){
    while(y==0){
            y=leer_valor();
    }
    return x/y;
}
 int suma(int x, int y);
 int resta(int x, int y);
 int multiplicacion(int x, int y);
 int main(){
  char rep;
     int a,b,c;
     int opt;
     do{
 imprimir_menu();
 leer_opcion(opt);
 a=leer_valor();
 b=leer_valor();
 switch(opt){
 case 1:
    c=suma(a,b);
    break;
 case 2:
    c=resta(a,b);
    break;
 case 3:
    c=multiplicacion(a,b);
    break;
 case 4:
    c=divicion(a,b);
    break;
 default:
    printf("Opcion invalida"); break;
 }
 printf("El resultado es %d",c);
 printf(" Desea hacer otra operacion? S N \n");
rep = getch();
} while((rep=='S') || (rep=='s')  );
    return 0 ;
}
 void imprimir_menu(){
 printf("1. Suma\n");
 printf("2. Resta\n");
 printf("3. Multiplicacion\n");
 printf("4. Divicion\n");

 }
 void leer_opcion(int& opt){
 printf("Introduce una opcion");
 scanf("%d",&opt);
 }
 int suma(int x, int y){
     return x+y;
 }
 int resta(int x, int y){
     return x-y;
 }
 int multiplicacion(int x, int y){
     return x*y;
 }
