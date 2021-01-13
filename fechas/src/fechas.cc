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
#include <cstdlib>
#include "fecha.h"
#include "fecha.cc"
using namespace std;

int main (int argc, char* argv[]) {
  Usage (argc, argv);
  string fichero_entrada = argv[1];
  string fichero_salida = argv[2];
  ofstream FicheroSalida;
  ifstream FicheroEntrada (fichero_entrada);
  string texto_entrada;
  if (FicheroEntrada.is_open()) {
    while (FicheroEntrada.good()) {
      FicheroEntrada >> texto_entrada;
    }
    FicheroEntrada.close();
  }

  FicheroSalida.open (fichero_salida);
  FicheroSalida << orden_fechas;
  FicheroSalida.close (); 
}