#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

class cadena {
private:

  std::string str_;

public:

  //Constructor.
  cadena( std::string str = "/" ){
    str_ = str;
  }

  //Metodos
  void set( std::string str ); //Setter.
  int size(); //Metodo size; retorna el tamaño de la cadena.
  std::string inversa(); //Metodo inversa; Retorna la cadena inversa
  std::string prefijos(); //Metodo prefijos; Retorna los prefijos de la cadena
  std::string sufijos(); //Metodo sufijos; Este metodo retorna una string con los sufijos de la cadena
  std::string subcadenas(); //Metodo subcadenas; Retorna las subcadenas 

};


