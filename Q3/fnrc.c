#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    int i1 = 0; 
    int i2 = 0;
    int repete = 1; 
    char naorepete;

    while(i1 < length){
    repete = 0; 
    i2 = 0; 

       
    while(i2 < length){ 
    if(i1 != i2){
    if (sentence[i1]==sentence[i2]){
    repete = 1;
    }
    }
    i2++;
    } 

    if (repete == 0){ 
    naorepete = sentence[i1];
    printf("%c", naorepete); 
    return(naorepete);
    } 
    i1++;
    }
    printf("-1");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    return 0;
}
