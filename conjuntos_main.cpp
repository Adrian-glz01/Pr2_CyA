// Universidad de La Laguna
// Escuela Superior de Ingenierıa y Tecnologıa
// Grado en Ingenierıa Informatica
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 2: Sımbolos, alfabetos y cadenas
// Autor: Adrián González Expósito
// Correo: alu0101404813@ull.edu.es
// Fecha: 06/10/2021
// Archivo cya-P02-Strings.cc: programa cliente.
// Contiene la funcion main del proyecto que usa las clases cadenas e conjuntos

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "cadena.hpp"
#include "alphabet.hpp"

int main(int argc, char* argv[]){ 
  //E/S
  std::string inputfile = argv[1];
  std::string outputfile = argv[2];

  //Opcode 
  int opcode = atoi(argv[3]);

  //Lectura del fichero de entrada
  std::ifstream file;
  std::string line;

  file.open(inputfile);

  //Fichero de salida
  std::ofstream out_file(outputfile.c_str(), std::ofstream::trunc );
  out_file.close();  //Dejar fichero de salida limpio

  while( getline(file, line) ){

    std::vector<std::string> warehouse;
    std::istringstream ssfile(line);
    std::string sub_str;
    while( ssfile >> sub_str){ 
      warehouse.emplace_back( sub_str );
    }

    std::string Last_Element = warehouse.back();
    cadena my_str ( Last_Element );
    warehouse.pop_back();

    //Condicional para crear un alfabeto en caso de que en la linea leida
    //en el fichero de entrada solo haya una cadena
    if(warehouse.empty()){
      alphabet alph(warehouse);
      alph.fillalphabet(Last_Element);
    }else
      alphabet alph(warehouse);
     
    //Abro archivo salida
    out_file.open(outputfile.c_str(), std::ofstream::app | std::ofstream::binary  ); 

    // Switch que trabaja sobre el opcode, para determinar que metodo se selecciona.
    //Opcode = 1 -> Se obtiene el tamaño de las cadenas introducias en el fichero de entrada.
    //Opcode = 2 -> Obtiene la inviersa de la cadena.
    //Opcode = 3 -> Se obtienen los prefijos de las cadenas.
    //Opcode = 4 -> Se obtienen los sufijos de las cadenas.
    //Opcode = 5 -> Se obtienen las subcadenas 

    switch (opcode){
    case 1:
      
      out_file << my_str.size() << "\r\n";
      out_file.close();
      break;
    
    case 2:

      out_file << my_str.inversa() << "\r\n";
      out_file.close();
      break;

    case 3:

      out_file << my_str.prefijos() << "\r\n";
      out_file.close();
      break;
    
    case 4:

      out_file << my_str.sufijos() << "\r\n";
      out_file.close();
      break;

    case 5:

      out_file << my_str.subcadenas() << "\r\n";
      out_file.close();
      break;

    default:
      break;
      
    }
  }
}
