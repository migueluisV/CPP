#pragma once
#include <iostream>

class CaliAl
{
	private:
		short CalVali = 0, CalInvali = 0, CaliApro = 0, CaliRepro = 0;
		float Prom, AcumCali = 0, CaliMax = 0, CaliMen;
		void Despliegue(float cal[], std::string nom[]);

	public:
		void IngresoDatos(float cal[], std::string nom[], int cont);
};