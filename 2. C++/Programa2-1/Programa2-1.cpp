#include <iostream>
using namespace std;
    class Fecha
    {
    private:
         int dia = 9;
         int mes;
         int anio;
         void Imprimir();

    public:
         Fecha(int = 3, int = 4, int = 2014);
         void inicializaFecha(int, int, int);
            void muestraFecha();

        void fun(int dia, int mes, int anio);
    };

            Fecha::Fecha(int dd, int mm, int aaaa){
         mes = mm;
         dia = dd;
            anio = aaaa;
         }

     void Fecha::inicializaFecha(int dd, int mm, int aaaa){
                anio = aaaa;
                mes = mm;
                 dia = dd;
            return;
         }


         void Fecha::muestraFecha()
        {
         cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
         return;
         }






     int main()
     {
            Fecha a, b, c(21, 9, 1973);

            b.inicializaFecha(17, 6 , 2000);
            a.muestraFecha();
            b.muestraFecha();
            c.muestraFecha();

            // aqui se intenta acceder a los atributos privados
            Fecha z;
            //z.dia=9;
            //cout << z.mes;


         }
