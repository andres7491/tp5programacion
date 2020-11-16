#include <stdio.h>
#include <ctype.h>

#define MAX 100

void analizar_linea(char linea[], int *pc);
int main()
{
  char linea[MAX];

  int consonantes = 0;

  printf("introducir una linea de texto:\n");

  gets(linea);  // decía leer con gets
  //     scanf("%[^\n]", linea);

  analizar_linea(linea, &consonantes);

  printf("\nN° de consonantes:%d", consonantes);
}

void analizar_linea(char linea[], int *pc) // mejores nombres de variables y parámetros hacen el código más legible
{
  char c;
  int cont = 0;

  while ((c = toupper(linea[cont])) != '\0')
  {

    if ((c >= 'B' && c <= 'D') || (c >= 'F' && c <= 'H') || (c >= 'J' && c <= 'N') || (c >= 'P' && c <= 'T') || (c >= 'U' && c <= 'Z'))
      ++*pc;

    ++cont;
  }

  while ((c = toupper(linea[cont])) != '\0')  // En un sólo while tenés que hacer las 2 cosas
  // cont está parado al final de la línea por eso no la recorre de nuevo
  { //corregir

    if ((c >= 'c' && c <= 'd') || (c >= 'f' && c <= 'h') || (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 't') || (c >= 'u' && c <= 'z'))
      //*p_mayuscula;

      printf("%c", toupper(*(pc++)));
      // las consonantes las tenés que convertir y no mostrar solamente
      // fijate que pasa si unís los 2 if y hacés un solo while
  }
}
