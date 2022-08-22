#include <stdio.h>

int main(void) 
{  
  int a, b;
  
  printf(" --- JOGO ENTRE DUAS UNIVERSIDADES        ----");
  printf("\n --- Diga-me os gols feitos pela UNICID: ");
  scanf ("%d",&a);
  printf ("Agora os gols feitos pela escola visitante: ");
  scanf ("%d",&b);

  if (a > b) printf ("A UNICID foi a escola campeã, parabéns");
  else if (a < b) printf ("Time visistante foi a campeã, não foi dessa vez que pena");
       else if (a == b) printf ("Houve um Empate e teremos um próximo jogo");

  printf ("\n --- JOGO FINALIZADO, ATÉ A PROXIMA ---");
  
  return 0;
}
