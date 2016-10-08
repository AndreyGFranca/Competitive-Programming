/*********************************************************************
 * Andrey França                                                     *
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1069     *
 ********************************************************************/

#include <stdio.h>
#include <string.h>

int main (int argc, char argv[]){

    int i = 0, j = 0, diamonds = 0, n = 0;
    char input[1010];

    scanf("%d", &n);

    while (n--){
        scanf("%s", input);
        diamonds = 0;

        for (i = 0; i < strlen(input); i++){
            if(input[i] == '\0')
                break;
            if(input[i] == '<'){
                for (j = i; j < strlen(input); j++){
                    if(input[j] == '>'){
                        diamonds++;
                        input[j] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", diamonds);
    }
}
