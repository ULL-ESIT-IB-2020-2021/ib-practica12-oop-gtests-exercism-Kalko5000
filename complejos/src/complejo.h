/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Thomas Edward Bradley
 * @date 12.jan.2020
 * @brief Contiene las declaraciones de las clases y funciones localizadas en 
 *        "complejo.cc" y a la vez el contenido del string kHelpText
 */

#include <iostream>
using namespace std;

const string kHelpText = "Este programa requiere 4 parametros adicionales para funcionar";
const string kHelpText2 = "primer numero real / primer numero imaginario / segundo \
numero real / segundo numero imaginario";

void Usage (int argc, char* argv[]);
Complejo Add (Complejo complejo1, Complejo complejo2);
Complejo Sub (Complejo complejo1, Complejo complejo2);
	
#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo {
 private:
  int real_ {};
  int imaginario_ {};

 public:
  Complejo(int real, int imaginario);
  void SetComplejo (int real, int imaginario);
  int getReal () const { return real_; }
  int getImaginario () const { return imaginario_; }
  void Print();
};

#endif