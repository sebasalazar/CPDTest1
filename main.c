#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * 
 * @param argc Cantidad de argumentos
 * @param argv Arreglo asociativo de argumentos
 * @return el código de salida de la ejecución del programa
 */
int main(int argc, char** argv) {

    // Si hay argumentos vamos a procesar
    if (argc > 1) {
        // Obtenemos el largo del argumento procesado
        int largo = (int) strlen(argv[1]);
        //Asignamos memoria para copiar el string
        char* sujeto = (char *) calloc(largo + 2, sizeof (char));
        // copiamos el contenido del argumento en el arreglo definido
        snprintf(sujeto, largo + 1, "%s", argv[1]);

        // imprimimos el mensaje en la salida estándar
        fprintf(stdout, "\nHola %s\n", sujeto);

        // Liberamos la memoria usada
        free(sujeto);
        return EXIT_SUCCESS;
    } else {
        // Retonamos error y mostramos mensaje en la salida de error
        fprintf(stderr, "\nNo hay argumentos suficientes para %s\n", argv[0]);
        return EXIT_FAILURE;
    }
}
