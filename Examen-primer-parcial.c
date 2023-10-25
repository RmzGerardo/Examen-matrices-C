/*

1. Realiza un programa en C que obtenga dos menús:

- Menú arreglos

Opciones submenú
Ingresar datos arreglo 1
Leer datos arreglo 1 
Suma interna arreglo 1
Lectura inversa arreglo 1   
Ingresar datos arreglo 2
Leer otros datos arreglo 2
Lectura inversa arreglo 2
Suma de los arreglos  

*/




#include <stdio.h>
#include <stdlib.h>

int main()

// que es una variable 

// una variable es un espacio de memoria que se le asigna un valor.. 1,a, nombre

// int numero1 = 10;
// char letra = 'a'; // letras o simbolos
// string  // nombres algo largo (1, 100)



{

    char opcion;
    int op; // opcion que se va a elegir
    int vec[4],vec2[4],i; // arreglos de 4 elementos 

    

    // serie de conjuntos de algo [1,2,3,4,5,6,7,8,9,10] [a,b,c,d,e,f,g,h,i,j]
    int continuar = 1; 
    int vecA[4],vecA2[4]; /* Esta variable sera la que almacene los valores de vec 1 */
    int suma = 0;
    int suma2 = 0;
    int sumTotal = 0;



do{



    printf("Bienvenido al menu de arreglos\n");
    printf("Ingresar datos arreglo 1\n");
    printf("1. Leer datos arreglo 1 \n");
    printf("2. Suma interna arreglo 1\n");
    printf("3. Lectura inversa arreglo 1 \n");
    printf("4. Ingresar datos arreglo 2 \n");
    printf("5. sumar datos arreglo 2 \n");
    printf("6. Lectura inversa arreglo 2 \n");
    printf("7. Suma de los arreglos 1 y 2\n");



    scanf("%i", &op); // permite ingresar un valor

 

    switch (op)
    {
        case 1:
            printf("En esta opcion se podran ingresar los datos del arrego 1 \n");
            printf("Agrega 4 numeros cualquiera \n");

            for(i = 0; i < 4; i++){
                scanf("%i",&vec[i]); // permite ingresar un valor
                 vecA[i] = vec[i];
            
            }

            for (i = 0; i < 4; i++) {
                printf("Los numeros son: %i \n",vec[i]);
            }

            break;
        
        case 2:

            printf("En esta opcion se podra sumar los arreglos \n");
    
            for (i = 0; i < 4; i++)
            {
            suma += vecA[i];
            }
            printf("La suma de los elementos del arreglo 1 es: %i\n", suma);
            


        break;


        case 3:

            printf("Leyendo los arreglos de forma inversa \n");

            for( i = 3; i >= 0; i--){
                printf("Los numeros a la inversa son: %i \n",vecA[i]);
            }

        break;

        case 4:

            printf("Ingresa los datos del arreglo 2 para poder leerlos \n");
            printf("Agrega 4 numeros cualquiera \n");
        
            for(i = 0; i < 4; i++){
                scanf("%i",&vec2[i]);
                vecA2[i] = vec2[i];
                
            }

            for (i = 0; i < 4; i++) {
                printf("Los numeros son: %i \n",vec2[i]);
            }


        break;


        case 5:

            printf("En esta opcion se podra sumar los arreglos 2 \n");
    
            for (i = 0; i < 4; i++)
            {
            suma2 += vecA2[i];
            }
            printf("La suma de los elementos del arreglo 2 es: %i\n", suma2);


        break;

        case 6:

            printf("Leyendo los arreglos de forma inversa \n");

            for( i = 3; i >= 0; i--){
                printf("Los numeros a la inversa son: %i \n",vecA2[i]);
            }

        break;

        case 7:

            printf("La suma de los arreglos 1 y 2 es: ");

            for (i = 0; i < 4; i++)
            {
              
            
            sumTotal = suma + suma2;

                
            }
             printf("%i ", sumTotal);

        break;



        default:
            printf("No seleccionaste ningun numero, Adios \n");
        break;

    }



    if (continuar) {
        printf("\n ¿Desea continuar? (S/N): ");
        scanf(" %c", &opcion);
        if (opcion != 'S' && opcion != 's') {
                continuar = 0;
        }
        }
    } while (continuar);

    printf("Adiós. Este es mi examen final\n");

return 0;
}







// while (opcion !='s')
// {

//     printf("Escribe un numero \n");
//     scanf("%i",&op);
//     printf("Escribiste el numero %i \n",op);
 

//     printf("Deseas continuar \n");
//     scanf("%c",&opcion);




// }





