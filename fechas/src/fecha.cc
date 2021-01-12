/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Thomas Edward Bradley
 * @date 12.jan.2020
 * @brief El programa analiza un fichero de entrada y escribe todas las fechas encontradas 
 *        en un fichero de salida, ordenadas de menor a mayor
 */

#include <iostream>
#include <fstream>
#include <string>
#include "fecha.h"
using namespace std;

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa requiere un minimo de 3 parámetros para su ejecución;
 *
 *  @param[in] argc Number de parametros en la línea de codigo
 *  @param[in] argv Vector (char*) que contiene los parámetros
 */

void Usage (int argc, char* argv []) {
  if (argc != 3) {
    cout << "Por favor consulte el funcionamiento correcto de " << argv[0]
         << " con el comando --help, poniendo esta justo después de " << argv[0] << endl;
     exit(EXIT_SUCCESS);
  }
  string parametro {argv[1]};
  if (parametro == "--help") {
    cout << kHelpText << endl;
    cout << kHelpText2 << endl;
    exit(EXIT_SUCCESS);
  }
}

#define FECHA_H

class Fecha {
 private:
  int dia_ {};
  int mes_ {};
  int año_ {};

 public:
  Fecha(int dia = 01, int mes = 01, int año = 0001)
        : dia_{dia}, mes_{mes}, año_{año} {}
  int dia() const { return dia_; }
  int mes() const { return mes_; }
  int año() const { return año_; }
};