/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Thomas Edward Bradley
 * @date 12.jan.2020
 * @brief aqui se encuentran las declaraciones a las clases y funciones contenidas en
 *        fechas.cc, ademas se encuentra el texto contenido en la constante "kHelpText"
 */

#include <iostream>
using namespace std;

const string kHelpText = "./fechas - Gestión de fechas";
const string kHelpText2 = "Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt";

void Usage (int argc, char* argv []);
vector <Fecha> sacar_fechas (string texto);
string orden_fechas (vector <Fecha> fechas_guardadas);
	
#ifndef FECHA_H
#define FECHA_H

class Fecha {
 private:
  int dia_ {};
  int mes_ {};
  int año_ {};

 public:
  Fecha(int dia, int mes, int año);
  void SetFecha (int dia, int mes, int año);
  int dia() { return dia_; }
  int mes() { return mes_; }
  int año() { return año_; }
  bool bisiestro (int año);
};

#endif