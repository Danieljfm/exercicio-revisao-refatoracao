#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
   
	double getsalarioHora (){
		return salarioHora; }
	void setsalarioHora (double v) {
		salarioHora = v; }
	
	std::string getnome() { return nome }
	void setnome(std::string a) { nome = a }

    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > horaspadrao) {
        double x = horasTrabalhadas - horaspadrao;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	private : 
	 double salarioHora;  
    	   
	 double horaspadrao = 8;
	 std::string nome;
	
};

#endif
