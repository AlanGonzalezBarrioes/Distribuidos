#ifndef __COORDENADA_H__
#define __COORDENADA_H__

class Coordenada
{
	private:
		double x;
		double y;
		double z;
	public:
		Coordenada(double = 0, double = 0, double = 0);
		double obtenerX();
		double obtenerY();
		double obtenerZ();
};

#endif
