#include "cabecera.h"
char Colores[10][10]={"blanco", "amarillo", "naranja", "rosa", "rojo", "verde", "azul", "morado", "marrón", "negro"};
char TiposPrendas[8][10]={"camiseta", "camisa", "pantalon", "falda", "vestido", "zapatos", "jersey", "chaqueta"};

main()
{
   int op, n_tiendas=0;
   tCadena cadena;
  
   cadena.n_tiendas=0;
   cadena.p_tiendas=NULL;
 
   do
   {
      op=Menu();
	
	    if (op!=6)
	    {
	       switch (op)
	       {
		        case 1: // crear array de tiendas
               if (CrearTiendas(&cadena)==-1)
                   ErrorMemoria(cadena, "las tiendas");
		           system("pause");
		        break;
		        case 2: //Inicializar las tiendas y crear arrays de prendas
			         if (IniTiendas(cadena.p_tiendas, cadena.n_tiendas)==-1)
                  ErrorMemoria(cadena, "las prendas");
		           system("pause");
		        break;
		        case 3:
		   	       //VisuTiendas(cadena.p_tiendas,cadena.n_tiendas);
			         VisuCadena(cadena);
			         system("pause");
		        break;
            case 4: //Abrir una tienda: crearla e inicializarla
		   	       if (AnyadirTienda(&cadena)==-1)
                  ErrorMemoria(cadena, "las tiendas");
               system("pause");
		           break;
     
           case 5: //Eliminar un tipo de prenda de las tiendas
		          EliminarPrendaDeTiendas(cadena);
			        system("pause");
		       break;
        } // fin del switch
     } // fin del if
      
   }while (op!=6);

   LiberaMemoria(cadena);
  
   MemoryManager_DumpMemoryLeaks();
   return 0;
}

int Menu()
{
  int op;
  do
  {
	  system("cls");
	  printf("\n\n");
	  printf("\t1. Crear array de tiendas\n");
    printf("\t2. Inicializar tiendas y prendas\n");
	  printf("\t3. Visualizar datos\n");
    printf("\t4. Anyadir tienda\n");
    printf("\t5. Eliminar un tipo de prenda de las tiendas\n");
    printf("\t6. Salir\n");

    printf("\n Selecciones la opcion deseada\n\n");
    scanf("%d",&op);
  }while ((op<1) || (op>6));
  return op;
}
