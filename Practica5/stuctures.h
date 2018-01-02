typedef enum{
  blanco, amarillo, naranja, rosa, rojo, verde, azul, morado,
  marron, negro
}tColor;

typedef enum{
  camiseta, camisa, pantalon, falda, vestido, zapatos, jersey,
  chaqueta
}tTipoPrenda;

typedef struct{
  char ref[15];
  char talla[5];
  tColor color;
  tTipoPrenda tipo;
  char h_m;
  int n_uds;
  float precio;
}tPrenda;

typedef struct{
  char direccion[50];
  char tfno[10];
  char email[50];
}tContacto;

typedef struct{
  int codigo;
  tContacto contacto;
  int n_prendas;
  tPrenda *p_prendas;
}tTienda;

typedef struct{
  tContacto contacto;
  int n_tiendas;
  tTienda *p_tiendas;
}tCadenal;
