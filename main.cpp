#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <list>
//using namespace std;

int main(int argc, char const *argv[])
{
    std::list<Mascota> mascotas;

    Alimento a1(5);
    Alimento a2(2);
    Mascota m1("Firulais");
    Mascota m2("Coraje");

    mascotas.push_back(m1);
    mascotas.push_back(m2);

    m1.Comer(a1);
    m2.Comer(a2);

    for (auto &&mascota : mascotas)
    {
        std::cout
            << mascota.Leernombre()
            <<" : "
            << mascota.LeerEnergia()
            << std::endl;
    }

    return 0;
}
