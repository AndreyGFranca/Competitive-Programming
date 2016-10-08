#include <stdio.h>
#include <stdbool.h>

#define TAM_MAX 999

/********************************************************************
 * Struct da pilha que sera usada para empilhar e desempilhar o deck*
 ********************************************************************/
typedef struct{
    int top;
    int item[TAM_MAX];
}s_stack;

/********************************************************************
 * Função de empilhar.                                              *
 ********************************************************************/
int stack_push(s_stack* stack, int value){
    stack->item[++stack->top] = value;
    return true;
}

/********************************************************************
 * Função de desempilhar.                                           *
 ********************************************************************/
int stack_pop(s_stack* stack){
    if (stack->top == 0)
        return false;
    return stack->item[stack->top--];
}

/*********************************************************************
 * Funçao que retorna true se a pilha estiver vazia ou falso caso nao*
 *********************************************************************/
bool stack_is_empty(s_stack *stack){
    if(stack->top == 0)
        return true;
    return false;
}

/********************************************************************
 * Funçao Principal.                                                *
 ********************************************************************/
int main (int argc, char argv[]){

    int n, i;
    s_stack s1, s2, discarted;

    while(scanf("%d", &n) != EOF){
        s1.top = 0, discarted.top = 0, s2.top = 0;

        if(n == 0)
            return 0;

        /*****************************************************************
         *Laço para empilhar todos os valores na pilha principal s1      *
         * Empilhando sempre do maior para o menor, ou seja o topo = 1   *
         * e a base igual a n.                                           *
         *****************************************************************/
        for (i = n; i > 0; i--)
            stack_push(&s1, i);

        while(s1.top >= 2) {
            /*****************************************************************
             * Descartar a carta do topo. Empilhando em uma pilha auxiliar.  *
             *****************************************************************/
            stack_push(&discarted, stack_pop(&s1));

            /******************************************************************
            * O valor do primeiro item e armazenado em uma variavel temporaria*
            * e eh decrementado um do valor do topo                           *
            *******************************************************************/
            int temp = s1.item[s1.top--];

            /******************************************************************
            * Toda pilha s1 eh desempilhada na pilha auxiliar s2              *
            *******************************************************************/
            while (!stack_is_empty(&s1))
                stack_push(&s2, stack_pop(&s1));

            /******************************************************************
            * O Valor da variavel temporaria eh passada para a base de s1     *
            *******************************************************************/
            stack_push(&s1, temp);

            /********************************************************************
            * Os valores de s1 sao recolocados agora com a variavel temp na base*
            *********************************************************************/
            while (!stack_is_empty(&s2))
                stack_push(&s1, stack_pop(&s2));
        }

        /**********************************************************************
         * Desempilha toda discart em s2 para printar na ordem correta do site*
         **********************************************************************/
        while(!stack_is_empty(&discarted))
            stack_push(&s2, stack_pop(&discarted));

        /**********************************************************************
         * Printa as pilhas como especificado no site                         *
         **********************************************************************/
        printf("Discarded cards: %d", stack_pop(&s2));
        while(!stack_is_empty(&s2))
            printf(", %d", stack_pop(&s2));
        printf("\n");
        printf("Remaining card: %d\n", stack_pop(&s1));
    }

    return 0;
}
