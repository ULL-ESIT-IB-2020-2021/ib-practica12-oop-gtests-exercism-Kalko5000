/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Thomas Edward Bradley
 * @date 14.jan.2020
 * @brief El programa muestra por pantalla los resultados de varios calculos llevados
 *        a cabo con numeros complejos (con modificación)
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "mod_complejo.h"
#include "mod_complejo.cc"
using namespace std;

int main (int argc, char *argv[]) {
  cout << "Este programa perfmite sumar y restar con numeros complejos." << endl;
  Usage (argc, argv);
  string real1_string = argv[2];
  int real1 = int(real1);
  string img1_string = argv[3];
  int img1 = int(img1);
  string real2_string = argv[4];
  int real2 = int(real2);
  string img2_string = argv[4];
  int img2 = int(img2);
  Complejo complejo1 (real1, img1);
  Complejo complejo2 (real2, img2);
  Complejo resultado;
  resultado = Add(complejo1, complejo2);
  cout << "La suma de ambas es: ";
  resultado.Print();
  resultado = Sub(complejo1, complejo2);
  cout << "La resta de ambas es: ";
  resultado.Print();
  resultado = complejo1 * 2;
  cout << "La primera por 2 es: ";
  resultado.Print();
  resultado = complejo1 * 2.34;
  cout << "La primera por 2.34 es: ";
  resultado.Print();
}