#include <iostream>
#include <string>


using namespace std;

namespace secreto{
    class Secret_msg
    {
        string msg;
        string clave;
        bool candado;
    public:
        Secret_msg(const string _msg, const string _clave):
            msg{_msg}, clave{_clave}, candado{true} {};
        bool is_locked(){ return candado; }
        bool unlock(const string &_clave)
        {
            if(_clave == clave)
            {
                candado = false;
                return true;
            }
            return false;
        }
        bool lock()
        {
            return lock(clave);
        }
        bool lock(const string &_clave)
        {
            if(!candado)
            {
                candado = true;
                clave = _clave;
                return true;
            }
            return false;
        }
        bool erase()
        {
            if(!candado)
            {
                msg.clear();
                return true;
            }
            return false;
        }

        
        friend ostream& operator<< (ostream &os, const Secret_msg &m)
        {
            if(!m.candado)
            {
                os << m.msg;
            }
            return os;
        }
    };

}


int main ()
{
    secreto::Secret_msg m{"Hola me llamo juan", "123abc"};
    cout << boolalpha << m.is_locked() << endl;
    cout << m.unlock("123abc") << endl;
    cout << m << endl;
    m.erase();
    cout << m << endl;
    m.lock("abc");
    cout << m.unlock("123abc") << endl;
    cout << m.unlock("abc") << endl;
    return 0;
}