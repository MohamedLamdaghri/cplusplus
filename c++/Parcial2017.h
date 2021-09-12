#ifndef PARCIAL_H
#define PARCIAL_H
#include <iostream>
#include <string>
#include <vector>

class Bala 
{
    int _x, _y, _vx, _vy ;
    const int danyo;
    public:
        Bala (const int x, const int y, const int vx, const int vy, const int danyo) :
            _x{x}, _y{y}, _vx{vx}, _vy{vy}, danyo{danyo} {}
        int get_x() const { return _x; }
        int get_y() const { return _y; }
        int get_danyo() const { return danyo; }
        void tick (const int lim_sup_x, const int lim_sup_y) 
        {
            _x += _vx;
            if (_x > lim_sup_x) _x -= lim_sup_x;
            else if (_x < 0) _x += lim_sup_x;
            _y += _vy;
            if (_y > lim_sup_y) _y -= lim_sup_y;
            else if (_y < 0) _y += lim_sup_y;
        }
        friend std::ostream& operator<< (std::ostream &os, const Bala &b) 
        {
        os << "(" << b._x << ", " << b._y << ") @ [" << b._vx << ", " << b._vy << "] : ";
            os << b.danyo;
    
            return os;
        }
};

class Marcianito 
{
    int _x, _y, _vx, _vy, _ticks, _vida;
    public:
        Marcianito (const int x, const int y, const int vida) :
        _x{x}, _y{y}, _vx{1}, _vy{1}, _ticks{0}, _vida{vida} {}
        int get_x() const { return _x; }
        int get_y() const { return _y; }
        int get_vida () { return _vida; }
        void tick (const int lim_sup_x, const int lim_sup_y) 
        {
            if (_vida <= 0) return;
            ++_ticks;
            if (_ticks%50 == 0) 
            {
                _vida *= 1.1;
            }
            if (_ticks%10 == 0) 
            {
                _vx += 3;
                _vy += 3;
            }
            _x += _vx;
            if (_x > lim_sup_x) _x -= lim_sup_x;
            else if (_x < 0) _x += lim_sup_x;
             _y += _vy;
            if (_y > lim_sup_y) _y -= lim_sup_y;
            else if (_y < 0) _y += lim_sup_y;
        }
        bool colisionar (const Bala &b) 
        {
            if (_vida <= 0) return false;
            if ((b.get_x()==_x) and (b.get_y()==_y)) 
            {
                _vida -= b.get_danyo();
                return true;
            }
            return false;
        }
        friend std::ostream& operator<< (std::ostream &os, const Marcianito &m) 
        {
            os << "(" << m._x << ", " << m._y << ") @ [" << m._vx << ", " << m._vy << "] : ";
            os << m._vida << " : " << m._ticks;
            return os;
        }
};
class Pantalla {
    std::vector<Bala> _balas;
    std::vector<Marcianito> _marcianitos;
    const int _lim_x, _lim_y;
    public:
        Pantalla (const int lim_x, const int lim_y) :
            _lim_x{lim_x}, _lim_y{lim_y}
        {
            _balas.reserve(10);
            _marcianitos.reserve(10);
        }
        Pantalla (const int lim_x, const int lim_y, std::vector<Bala> &balas) :
            _lim_x{lim_x}, _lim_y{lim_y}, _balas{balas}
        {
            _marcianitos.reserve(10);
        }
        void add_bala (const Bala &b) 
        {
            _balas.emplace_back(b);
        }
        void add_marcianito (const Marcianito &m) 
        {
            _marcianitos.emplace_back(m);
        }
        void tick () 
        {
            for (auto &b : _balas)
                b.tick(_lim_x, _lim_y);
            for (auto &m : _marcianitos) 
            {
                m.tick(_lim_x, _lim_y);
                for (const auto &b : _balas)
                    m.colisionar(b);
            }
        }
        bool marcianitos_muertos() 
        {
            bool todos_ko = true;
            for (auto &m : _marcianitos)
                if (m.get_vida() > 0)
                    todos_ko = false;
            return todos_ko;
        }
    friend std::ostream& operator<< (std::ostream& os, const Pantalla &p) 
    {
        if (not p._balas.empty()) 
        {
            os << "=== BALAS ===\n";
            for (const auto &b : p._balas)
                os << b << '\n';
        }
        if (not p._marcianitos.empty()) 
        {
            os << "=== MARCIANITOS+ ===\n";
            for (const auto &m : p._marcianitos)
            os << m << '\n';
        }
        return os;
    }
};
#endif // PARCIAL_H