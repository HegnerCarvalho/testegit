#include <stdio.h>

int main()
{
   int idade, *p;

   idade = 18;
   p = &idade;

   *p = 22;

   printf("Olá Mundo, a idade é %i\n",*p);
   printf("O endereço da variável idade é: %p\n",p);

   return 0;
}
