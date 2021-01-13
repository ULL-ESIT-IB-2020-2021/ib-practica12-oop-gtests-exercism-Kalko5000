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
class Fecha;
vector <int> orden_fechas (string texto);