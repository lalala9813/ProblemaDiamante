#include <iostream>

using namespace std;
class Persona
{
    public:
        int peso;
        int edad;
        Persona()
        {
            peso = 80;
            edad = 45;
        }
};

class Ing: public Persona
{
    public:
        int sueldo;
        Ing()
        {
            sueldo = 4500;
        }
        Ing(int peso, int edad, int sueldo);
};

class Doc: public Persona
{
    public:
        string codigo;
        Doc()
        {
            codigo = "00012786";
        }
        Doc(int peso, int edad, string codigo);
};

class Abo: public Ing, public Doc
{
    public:
        string nombre;
        Abo()
        {
            nombre = "Carlos";
        }
        Abo(int peso, int edad,int sueldo, string codigo,string nombre);
};

int main()
{
    cout << " <PERSONA> \n";
    Persona p;
    cout << "Su peso es --> " << p.peso << "\n";
    cout << "Su edad es --> " << p.edad << "\n\n";


    cout << " <INGENIERO> \n";
    Ing i;
    cout << "Su peso es --> " << i.peso << "\n";
    cout << "Su edad es --> " << i.edad << "\n";
    cout << "Su sueldo es --> " << i.sueldo << "\n\n";

    cout << " <DOCTOR> \n";
    Doc d;
    cout << "Su peso es --> " << d.peso << "\n";
    cout << "Su edad es --> " << d.edad << "\n";
    cout << "Su codigo es --> " << d.codigo << "\n\n";

    cout << " <ABOGADO> \n";
    Abo a;
    /*Lo resolvi usando :: y escogiendo de quien quiero heredar ciertas caracteristicas */
    cout << "Su peso es --> " << a.Ing::peso << "\n";
    cout << "Su edad es --> " << a.Doc::edad << "\n";
    cout << "Su sueldo es --> " << a.sueldo << "\n";
    cout << "Su codigo es --> " << a.codigo << "\n";
    cout << "Su nombre es --> " << a.nombre << "\n";


    return 0;
}
