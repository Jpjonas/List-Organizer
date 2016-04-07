#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <time.h>  
#include <stdlib.h>
#include <cstdio>
#include <ctime>

//! Define tipo de imovel casa como zero.
#define CASA 0
//! Define tipo de imovel apartamento como 1.
#define APARTAMENTO 1
//! Define o tamanho dos blocos gravados e lidos do arquivo.
#define TAMBLOCO 10000

using namespace std;

//! Define o tipo para os Imoveis.
typedef struct Imoveis Imoveis;

//! Estrutura que representa os registros dos imoveis gravados e lidos no arquivo.
struct Imoveis {
	//! Codigo chave para os registros de imoveis.
	long long int CodigoImovel;
	//! Indicador do tipo de imovel.
	short TipoImovel;
	//! Endereco do imovel.
	string Endereco;
	//! Numero de quartos do imovel.
	int NumeroQuartos;
	//! Preco do aluguel.
	float PrecoAluguel;
	//! Data em que o imovel esta disponavel para aluguel. Tipo AAAAMMDD.
	long int DataDisponibilidade;
};


int main();

/*! \mainpage Home
*\section obj_sec Objetivo
*Programa para geracao de uma base de dados com tamanho definido pelo usuario com imoveis.
*\n Grava e le os registros do arquivo binario.
*\section pra_sec Projeto de Arquivos
*\section aut_sec Autores
*Franscisco Pimentel
*\n Hevid Medeiros
*\n Jonas Pollnow
*/