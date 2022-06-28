# Funciones

## 7.1. Objetivos
* Demostrar el manejo de funciones y valores punto flotante.

## 7.2. Temas
* Funciones.
* Tipo double.
* División entera y flotante.
* Pruebas con assert.
* Argumentos con valor por defecto.

## 7.3. Problema
Desarrollar una función que, dada una magnitud en Farehnheit, calcule la
equivalente en Celsius:

Hay dos sub-problemas que se requieren solucionar antes de poder probar e
implementar la función Celsius:

* Valor de la fracción versus la división entera de la expresión 5/9 en C++.
* Representación no precisa de los tipos flotantes.

Una solución al primer problema es realizar división entre flotantes. Para el
segundo problema, debemos incorporar la comparación con tolerancia, para eso
debemos diseñar una función bool que reciba dos flotantes a comparar y un
flotante que repesente la tolerancia.

## 7.4. Restricciones
* Las pruebas deben realizarse con assert.

