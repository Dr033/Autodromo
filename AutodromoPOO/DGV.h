#ifndef DVG_H
#define DVG_H

#include <vector>
#include <iostream>
#include <iomanip>
#include "Piloto.h"
#include "Carro.h"
#include "CrazyPiloto.h"
#include "RapidoPiloto.h"
#include "SurpresaPiloto.h"

class DGV{
    string nome;
    vector <Piloto*> pilotos;
    vector <Carro> carros;
    static char letra;
public:
    DGV();
    DGV(const DGV &dgv);
    string getNome();
    void setNome(string nome);
    bool removeCarro(char id);
    bool removePiloto(string nome);
    void addPiloto(string tipo, string nome);
    void addCarro(Carro carro);
    void listarCarros();
    void listarPilotos();
    Carro* verSePilotoEstaAoVolante(string nome);
    bool encontraPiloto(string nome);
    bool encontraCarro(char id);
    Carro *buscaCarro( char id);
    Piloto *buscaPiloto (string nome);
    vector <Carro> getVectorCarros();
    vector <Piloto*> getVectorPilotos();
    DGV & operator=(DGV * dgv);
    ~DGV();
};
#endif /* DVG_H */

