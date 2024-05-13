#include <iostream>
using namespace std;
int main ()
{
   string nombre; 
   float Horastrabajadas;

   cout << "Ingrese  su nombre: ";
   getline(cin, nombre);

   cout  << "Ingrese las horas trabajadas: " ;
   cin >> Horastrabajadas;

   float tasa =10;
   float salarioBase= min (160.0f, Horastrabajadas) * tasa;
   float Horasextras= max(0.0f , Horastrabajadas - 160.0f) *tasa * 1.5;
   float salarioBruto= salarioBase + Horasextras;

   float Tasadeimpuestos = 0;
   if(salarioBruto<= 2000)
   {
    Tasadeimpuestos =0;
   }
   else if (salarioBruto <= 2200)
    {
    Tasadeimpuestos = 0.2;
    }
    else
   {
    Tasadeimpuestos = 0.3;

   }
   float taxes = salarioBruto * Tasadeimpuestos;
   float salarioNeto = salarioBruto - taxes;
   cout << "Empleado: " << nombre << ", Salario Neto: $" << salarioNeto << endl;
   
   return 0;


}