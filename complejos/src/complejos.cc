/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Thomas Edward Bradley
 * @date 12.jan.2020
 * @brief El programa muestra por pantalla los resultados de varios calculos llevados
 *        a cabo con numeros complejos
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "complejo.h"
#include "complejo.cc"
using namespace std;

int main (int argc, int argv[]) {
  Usage (argc, argv);
  Complejo complejo1 (argv[2], argv[3]);
  Complejo complejo2 (argv[4], argv[5]);
  Complejo resultado;
  resultado = Add(complejo1, complejo2);
  resultado.Print();
  resultado = Sub(complejo1, complejo2);
  resultado.Print();
}