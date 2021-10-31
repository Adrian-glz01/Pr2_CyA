#include "alphabet.hpp"

  //Setter.
  void alphabet::set( std::vector<std::string> aplhabet){
    alphabet_ = aplhabet;
  }

  //Metodo para crear un alphabeto a partir de una cadena
  void alphabet::fillalphabet( std::string str ){
    std::vector<std::string> my_vector;
    my_vector.emplace_back(std::string(1, str[0]));// my_vector = {h}  aloha
    for(int i = 1; i < str.size(); i++){
      int count = 0;
      for(int j = 0; j < my_vector.size() ; j++){
        if (std::string(1, str[i]) == my_vector[j]){ 
          count++;
        }
      }
      if(count == 0){
        my_vector.emplace_back(std::string(1, str[i]));
      }
    }
    alphabet_ = my_vector;
  }

  //Metodo print para imprimir por pantalla el alphabeto
  void alphabet::print(){
    for(auto element: alphabet_)
      std::cout << element << " ";
  }