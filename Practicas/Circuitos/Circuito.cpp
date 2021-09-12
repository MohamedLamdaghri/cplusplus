//
//  Circuito.cpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//
#include "Circuito.hpp"
#include "Puerta.hpp" // Accedo a una Puerta a través del puntero de un Cable!!!!

#include <string>
#include <iostream>
#include <sstream>

bool circuito::Circuito::calcular() {
    if(entradas_fijadas) {
        bool terminado=false;
        for (int i=0; i<100 && !terminado; ++i) { // 100 iteraciones max
            terminado = true;
            for (auto &c : cables) {
                if (!c.procesado && !c.entrada.calculado && c.salida.calculado) {
                    c.entrada.valor = c.salida.valor ;
                    c.entrada.calculado = true;
                    c.entrada.retardo = c.salida.retardo;
                    if (c.entrada.puerta != nullptr) {
                        c.entrada.puerta->actualizar();
                        //std::cout << *c.entrada.puerta;
                    }
                    c.procesado = true;
                    terminado=false;
                    //std::cout << c;
                }
            }
        }

        return true;
    }
    return false;
}

void circuito::Circuito::mostrar_salidas() {
    for (const auto &s: pines_finales) {
        std::cout << s << std::endl;
    }
}

void circuito::Circuito::fijar_entradas (std::initializer_list<bool> lista) {
    if (lista.size() == pines_iniciales.size()) {
        auto i_l=std::begin(lista);
        auto i_p = std::begin(pines_iniciales);
        for (;  i_l != std::end(lista);  i_l = std::next(i_l), i_p = std::next(i_p))
            i_p->valor = *i_l;
        entradas_fijadas = true;
    }
}

void circuito::Circuito::add_cable_entre (Pin &entrada_, Out_Pin &salida_) {
    cables.emplace_back(entrada_, salida_);
    Cable &ultimo = cables.back();
    entrada_.cable = &ultimo;
    salida_.cable = &ultimo;
}

void circuito::Circuito::print_cables() {
    for (const auto &c : cables)
        std::cout << c;
}

circuito::Circuito::Circuito (const int pins_ini, const int pins_fin) : pines_iniciales (pins_ini), pines_finales (pins_fin)
{
    for (int i=0; i<pines_iniciales.size(); ++i) {
        pines_iniciales[i].puerta = nullptr;
        pines_iniciales[i].valor = false;
        pines_iniciales[i].calculado = true;
        std::stringstream ss {"Entrada "}; ss << i;
        pines_iniciales[i].nombre = ss.str();//+ std::to_string(i);
        pines_iniciales[i].retardo = 0;
    }
    for (int i=0; i<pines_finales.size(); ++i) {
        pines_finales[i].puerta = nullptr;
        pines_finales[i].valor = false;
        pines_finales[i].calculado = false;
        std::stringstream ss {"Salida "}; ss << i;
        pines_finales[i].nombre = ss.str();//+ std::to_string(i);
        pines_finales[i].retardo = 0;
    }
}
