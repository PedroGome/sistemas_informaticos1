
# Table of Contents

1.  [Contenidos](#org3d6f81c)
2.  [To do List](#org729ed86)
    1.  [Ejercicio 7 arreglar valores](#org9818b38)
    2.  [Ejercicio 9 punteros](#orgb3002bf)
    3.  [Ejercicios 10 y extra](#org9652527)


<a id="org3d6f81c"></a>

# Contenidos

Aqui esta el codigo fuente de la practica2, actualmente se puede usar el linux, para compatibilidad con Windows hay que cambiar los comentarios en las funciones de las ultimas lineas

Este:

    /* Pause and clear functions */
    void pause(){
      system("read -n1 -r -p \"Press any key to continue...\" key"); // Comenta esta linea si usas windows
      //    system("pause"); // Quita el comentario si estas en windows
    
    }
    
    void clear(){
      system("clear"); //Comenta esta line si usas windows
      //      system("cls"); // Quita el comentario si usas windows
    
    }

a este codigo:

    /* Pause and clear functions */
    void pause(){
      //    system("read -n1 -r -p \"Press any key to continue...\" key"); // Comenta esta linea si usas windows
      system("pause"); // Quita el comentario si estas en windows
    
    }
    
    void clear(){
      //      system("clear"); //Comenta esta line si usas windows
      system("cls"); // Quita el comentario si usas windows
    
    }


<a id="org729ed86"></a>

# To do List


<a id="org9818b38"></a>

## Ejercicio 7 arreglar valores


<a id="orgb3002bf"></a>

## Ejercicio 9 punteros


<a id="org9652527"></a>

## Ejercicios 10 y extra

