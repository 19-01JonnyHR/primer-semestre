 /*Practica 1.2
 Huerta Rodriguez Jonathan
 */
 #include<stdio.h>
 #include<conio.h>
 int main (void){
 printf("1. suma\n");
 printf("2. resta\n");
 printf("3. multiplicacion\n");
 printf("introduce 3 para la multiplicacion");
 int opt;
 scanf("%d",&opt);
 int a;
 int b;
 printf("introduce la primera cantidad:");
 scanf("%d",&a);
 printf("introduce la segunda cantidad:");
 scanf("%d",&b);
 int c;
 if(opt==1){
 c =a+b;
 }
 else{
 if(opt==2){
 c=a-b;
 }
 else{
 c=a*b;
 }
 }
 printf("el resultado es %d",c);
 }
