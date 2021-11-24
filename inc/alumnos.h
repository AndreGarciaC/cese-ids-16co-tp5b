/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
/**
 * @brief Declaración de puntero constante alumno_t de tipo estructura alumno_s.
 * 
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/**
 * @brief Almacena en una cadena de caracteres los datos del alumno bajo un formato específico.
 * 
 * @param cadena Buffer de destino donde se almacenará un alumno.
 * @param espacio Tamaño máximo de bytes o caracteres que puede tener el buffer.
 * @param alumno Estructura que contiene los datos del alumno a almacenar.  
 * @return true si el número de bytes que están escritos en el buffer es mayor o igual a cero.
 * @return false si el número de bytes que están escritos en el buffer es menor a cero.
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);
/**
 * @brief Almacena en un arreglo de cadena de caracteres los datos de todos los alumnos.
 * 
 * @param cadena Buffer de destino donde se almacenarán los alumnos.
 * @param espacio Tamaño máximo de bytes o caracteres que puede tener el buffer.
 * @return true si el número de bytes que están escritos en el buffer es mayor a cero.
 * @return false si el número de bytes que están escritos en el buffer es menor o igual a cero.
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
