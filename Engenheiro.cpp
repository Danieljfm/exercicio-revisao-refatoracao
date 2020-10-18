#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
  
  int getprojetos() {return projetos;}
  void setprojetos(int n) {projetos = n;}
 private: 
  
  int projetos;
	
};

