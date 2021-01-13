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
#include <vector>
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

/** Definiciones del constructor y miembro "bisiestro" de la clase Complejos */

Fecha::Fecha(int dia = 01, int mes = 01, int año = 0001) {
  SetFecha (dia_, mes_, año_);
}

bool Fecha::bisiestro (int año) {
  if (año % 4 == 0) {
    return true;
  } else if (año % 100 == 0) {
    return false;
  } else if (año % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

/** Vector empleado para extraer las fechas del fichero de entrada */

vector <Fecha> sacar_fechas (string texto) {
  vector <Fecha> fechas_guardadas;
  int i {0}, p {1};
  for (i = 0; i < texto.length(); i++) {
    if (texto[i] >= char(48) && texto[i] <= char(57)) {
      if (texto[i + 2] == '/') {
        int dia = texto[i] + texto[i + 1];
        int mes = texto[i + 3] + texto[i + 4];
        int año = texto[i + 6] + texto[i + 7] + texto[i + 8] + texto[i + 9];
        Fecha fecha (dia, mes, año);
        fechas_guardadas[p] = fecha;
        p++;
        i = i + 9;
      }
    }
  }
  return fechas_guardadas;
}

/** Texto ordenando de mayor a menor las fechas que se va meter en el fichero de salida */

string orden_fechas (vector <Fecha> fechas_guardadas) {
  int size = fechas_guardadas.size(), i, p = size, posicion_max;
  string resultado;
  Fecha max {0,0,0};
  while (p != 0) {
    for (i = 1; i <= size; i++) {
      if (fechas_guardadas[i].año() > max.año()) {
        max = fechas_guardadas[i];
        posicion_max = i;
      } else if (fechas_guardadas[i].año() == max.año()) {
        if (fechas_guardadas[i].mes() > max.mes()) {
          max = fechas_guardadas[i];
          posicion_max = i;
        } else if (fechas_guardadas[i].mes() == max.mes()) {
          if (fechas_guardadas[i].dia() > max.dia()) {
            max = fechas_guardadas[i];
            posicion_max = i;
          }
        }
      }
    }
    resultado = resultado + to_string(max.dia()) + "/";
    resultado = resultado + to_string(max.mes()) + "/";
    resultado = resultado + to_string(max.año()) + " ";
    fechas_guardadas[posicion_max].SetFecha(0, 0, 0);
    max.SetFecha(0, 0, 0);
    p--;
  }
}