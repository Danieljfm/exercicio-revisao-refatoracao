#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    
	
	double quotaTotalAnual() {
	  return getquotaMensalVendas() * mesesdoano;
	}
	double getquotaMensalVendas () { return quotaMensalVendas }
	void setquotaMensalVendas (double v) { quotaMensalVendas = v }
private :
	  	  
	int mesesdoano = 12;
	double quotaMensalVendas;
};

