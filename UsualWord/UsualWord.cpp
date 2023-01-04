#include <bits/stdc++.h>

using namespace std;

int main(){

    char frase[200];
    map <int, string> strX;
  
    list <string> termos;
    
    char *palavras;
    int i = 0, j, k = 0;

    scanf("%[^\n]s", frase);
    palavras = strtok(frase, "  ");

    while(palavras != NULL){
    strX[i] = palavras;
    i++;

    palavras = strtok(NULL, "  ");
    }



    
    int vetor[i];
    memset(vetor,0,sizeof(vetor));

    for (j = 0 ; j < i; ++ j){
        for (k = 1; k < i; ++ k)
        {
            if (strX[j] == strX[k])
                vetor[j]+= 1;
        }
    }

    int biggest = vetor[0], res;
    for (j = 0; j < i; ++j)
    {
        if (biggest < vetor[j]){
            biggest = vetor[j];
        }
    }

    cout << strX[biggest];

 
    

    return 0;
}
