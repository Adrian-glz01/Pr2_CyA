#include "cadena.hpp"

  //Setter
  void cadena::set(  std::string str ){
      str_ = str;
  }

  //Size
  int cadena::size(){
    return str_.size();
  }

  //Inversa
  std::string cadena::inversa(){
    std::string reverse;
    int count = str_.size();
    for (int i = 0; i < count; i++){
      reverse += (std::string(1, str_.back()));
      str_.pop_back();
    }
    return reverse;          
  } 

  //Prefijos
  std::string cadena::prefijos(){
    std::string pref;
    pref= ("& ");
    for (int i = 0; i <= str_.size() ; i++){
      pref += (str_.substr(0,i));
      pref += " ";
    }
    return pref;
  }

  //Sufijos
  std::string cadena::sufijos(){
    std::string suf;
    suf = ("& ");
    int size = str_.size();
    for (int i = size; i <= str_.size(); i--){
      suf += (str_.substr(i,size));
      suf += " ";
    }
    return suf;
  }

  //Subcadenas
  std::string cadena::subcadenas(){
    std::string substr;
    substr= ("& ");
    int n = 1;
    int count = str_.size();
    for( int i = 0; i < str_.size() ; i++ ){
      int pos1 = 0;
      for( int j = 0; j < count; j++ ){             
        substr += (std::string(str_.substr(pos1,n))); 
        substr += " ";
        pos1++;
      }
      n++;
      count--;
    }
    return substr;
  }
