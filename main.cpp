#include <iostream>
#include <string>

/**
 * 
 * @param argc Cantidad de argumentos
 * @param argv Arreglo asociativo de argumentos
 * @return el código de salida de la ejecución del programa
 */
int main(int argc, char** argv) {

    // Si hay argumentos vamos a procesar
    if (argc > 1) {
        // Obtenemos el string del sujeto
        std::string sujeto(argv[1]);
        std::cout << std::endl << "Hola " << sujeto << std::endl;

        return 0;
    } else {
        // Retonamos error y mostramos mensaje en la salida de error
        std::cerr << std::endl << "No hay argumentos suficientes para " << argv[0] << std::endl;
        return 1;
    }
}
