#include <stdio.h>
#include <ctype.h>

void analizar_linea(char linea [], int*pc);
 int main()
 {
     char linea[80]; 
    
     int consonantes=0;
    

     printf("introducir una linea de texto:\n");
     scanf("%[^\n]", linea);

    analizar_linea(linea, &consonantes);

    
    
    printf("\nN° de consonantes:%d", consonantes);

   
   

 }

 void analizar_linea(char linea [], int*pc)
 {
     char c;
     int cont=0;

 
     while ((c=toupper(linea[cont]))!='\0'){
         
         if((c>='B'&&c<='D')||(c>='F'&&c<='H')||(c>='J'&&c<='N')||(c>='P'&&c<='T')||(c>='U'&&c<='Z'))
         ++ *pc;
           
        ++cont;

    
     }

 
 
            while ((c=toupper(linea[cont]))!='\0'){//corregir

         if((c>='c'&&c<='d')||(c>='f'&&c<='h')||(c>='j'&&c<='n')||(c>='p'&&c<='t')||(c>='u'&&c<='z'))
                //*p_mayuscula;

              printf("%c", toupper(*(pc++)));
            }

}
 