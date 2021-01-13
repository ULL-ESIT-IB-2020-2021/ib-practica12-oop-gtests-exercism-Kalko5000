/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Thomas Edward Bradley
 * @date 12.jan.2020
 * @brief El programa muestra por pantalla los resultados de varios calculos llevados
 *        a cabo con numeros complejos, especificamente, la suma y la resta.
 */

#include <iostream>
#include <fstream>
#include <string>
#include "complejo.h"
using namespace std;

void Usage(int argc, int argv[]) {
  if (argc != 5) {
    cout << "Modo incorrecto de uso" << endl;
    cout << "Pruebe: " << argv[0] << " --help para más información" << endl;
  }
  if (argc == 2) {
      cout << kHelpText << endl;
      cout << kHelpText2 << endl;
      exit(EXIT_SUCCESS);
  }
}

Complejo::Complejo(int real = 0, int imaginario = 01) {
  SetComplejo(real_, imaginario_); 
}

void Complejo::Print () {
    cout << real_ << " + (" << imaginario_ << ")i";
  }

Complejo Add (Complejo complejo1, Complejo complejo2) {
    int real1 = complejo1.getReal();
    int img1 = complejo1.getImaginario();
    int real2 = complejo2.getReal();
    int img2 = complejo2.getImaginario();
    Complejo suma {real1 + real2, img1 + img2};
    return suma;
}

  Complejo Sub (Complejo complejo1, Complejo complejo2) {
    int real1 = complejo1.getReal();
    int img1 = complejo1.getImaginario();
    int real2 = complejo2.getReal();
    int img2 = complejo2.getImaginario();
    Complejo resta {real1 - real2, img1 - img2};
    return resta;
}