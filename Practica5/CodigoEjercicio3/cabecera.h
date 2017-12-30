#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* #include "MemoryManager.h" */

typedef enum
{
  blanco, amarillo, naranja, rosa, rojo, verde, azul, morado, marron, negro
}tColor;

typedef enum
{
  camiseta, camisa, pantalon, falda, vestido, zapatos, jersey, chaqueta
}tTipoPrenda;

typedef struct
{
  char        ref[15];
  char        talla[5];
  tColor      color;
  tTipoPrenda tipo;
  char        h_m;
  int         n_uds;
  float       precio;
}tPrenda;

typedef struct
{
  char direccion[50];
  char tfno[10];
  char e_mail[50];
}tContacto;

typedef struct
{
  int codigo;
  tContacto contacto;
  int n_prendas;
  tPrenda *p_prendas;
}tTienda;

typedef struct
{
  tContacto  contacto;  // Estructura con dirección, teléfono y correo-e de la oficina donde se gestionan las tiendas
  int        n_tiendas; // Número total de tiendas
  tTienda    *p_tiendas;   // Puntero al inicio del array dinámico de las tiendas de la cadena
}tCadena;


int Menu();

void LeeCadena(char cadena[], char *p_mensaje, int max);
tContacto LeerContacto();
int CrearTiendas(tCadena *p_cadena);
int IniTienda(tTienda *pTienda);
int IniTiendas(tTienda *p_tiendas, int n_tiendas);
tPrenda IniPrenda();
void IniPrendasUnaTienda(tPrenda *p_prendas, int n_prendas);
void IniPrendasTiendas(tCadena cadena);
int AnyadirTienda(tCadena *p_cadena);

void VisuContacto(tContacto contacto);
void VisuPrenda(tPrenda prenda);
void VisuTienda(tTienda tienda);
void VisuCadena( tCadena cadena);
void ErrorMemoria(tCadena cadena, char *pcadena);

void EliminaPrenda(tPrenda *pp_prendas, int posPrenda, int n_prendas);
void EliminarPrendaDeTiendas(tCadena cadena);
void LiberaMemoria(tCadena cadena);






