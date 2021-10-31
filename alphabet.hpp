#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

class alphabet {
private:

  std::vector<std::string> alphabet_;

public:

  //Constructor.
  alphabet( std::vector<std::string> aplhabet ){
    alphabet_ = aplhabet;
  }

  //Metodos
  void set( std::vector<std::string> aplhabet); //Setter.
  void fillalphabet( std::string str ); //Metodo fillalphabet; A partir de este metodo se crea el alphabeto de una cadena cualquiera.
  void print(); //Metodo print; Este metodo imprime por pantalla el alphabeto que lo llama.
};

