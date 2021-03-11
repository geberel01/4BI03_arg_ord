//ESERCIZIO:
//DARE IN INGRESSO STRINGHE NUMERICHE
//E STAMPARE LE STRINGHE IN ORDINE CRESCENTE
#include <string.h>
#include <stdio.h>
int i;
int sum=0;
char str[100][20];
int main(int argc, char *argv[]) {
  for(i=0;i<argc;i++)
    {
      printf("Pos %d\t stringa: %s\n",i,argv[i]);
      sistemare indice:
      strcpy(str,argv[i]);

    }
    printf("somma: %d\n",sum);
  return 0;
  strcp

}

ES. PROT. ORDINAMENTO:
for(i=0)
  for(j=1+1)
   if arr[j]<arr[i] -> swap;
   
ES. PROT. SWAP:
    swap(char primo[20], char secondo[20])
    {
      char temp[20];
      strcpy(primo,temp);
      strcpy(secondo,primo);
      strcpy(temp,secondo);
    }