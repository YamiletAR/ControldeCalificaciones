# Sistema de Control de Calificaciones – Centro Educativo La Nueva Escuela

### Presentación
* **Nombre:** Yamilet Adames Rodríguez
* **Matrícula:** 2024-2997
* **Asignatura:** Lógica de Programación
* **Docente:** Gamalier Reyes del Carmen

**Descripción del programa**

Este programa fue desarrollado en C++ para registrar y procesar las calificaciones de los estudiantes del Centro Educativo "La Nueva Escuela". Permite ingresar los datos de un grupo, calcular el promedio individual de cada estudiante y determinar si está aprobado o reprobado. También genera un resumen general con la cantidad de estudiantes aprobados y reprobados, el promedio general del grupo y el nombre del estudiante o los estudiantes con el promedio más alto. Además, permite procesar varios grupos sin tener que ejecutar nuevamente el programa.

**Datos de entrada**

El programa solicita los siguientes datos:
* Curso y sección del grupo.
* Cantidad de estudiantes, que debe ser mayor que cero.
* Nombre y apellido de cada estudiante.
* Cuatro calificaciones por estudiante, cada una dentro del rango de 0 a 100.
* Confirmación para procesar otro grupo (s/n).

**Proceso**

1. Solicita el curso y la sección del grupo.
2. Pide la cantidad de estudiantes y valida que sea mayor que cero.
3. Registra el nombre y las cuatro calificaciones de cada estudiante.
4. Verifica que cada calificación se encuentre entre 0 y 100.
5. Calcula el promedio individual de cada estudiante.
6. Determina el estado académico:
   * **Aprobado:** promedio mayor o igual a 70.
   * **Reprobado:** promedio menor que 70.
7. Acumula los promedios individuales para calcular el promedio general del grupo.
8. Identifica al estudiante o los estudiantes con el promedio más alto.
9. Presenta el resumen general del grupo.
10. Pregunta si se desea procesar otro grupo.

**Salida del programa**

Al finalizar el registro de cada grupo, el programa muestra:
* Nombre del estudiante.
* Promedio individual.
* Estado académico (aprobado o reprobado).
* Curso y sección.
* Total de estudiantes registrados.
* Cantidad de estudiantes aprobados.
* Cantidad de estudiantes reprobados.
* Promedio general del grupo.
* Nombre y promedio del estudiante o estudiantes con la calificación más alta.

**Tipos de bucles utilizados**

En el desarrollo del programa se utilizaron tres tipos de bucles:

1. **Bucle do while:** Se utiliza para permitir que el usuario procese otro grupo de estudiantes después de finalizar el resumen del grupo anterior. El programa vuelve a ejecutarse mientras el usuario responda "S" o "s".
2. **Bucle while:** Se utiliza para validar los datos ingresados. En primer lugar, comprueba que la cantidad de estudiantes sea mayor que cero. También verifica que cada calificación esté dentro del rango permitido de 0 a 100. Si el dato no cumple con las condiciones, vuelve a solicitarlo.
3. **Bucle for:** Se utiliza para recorrer la cantidad de estudiantes indicada por el usuario. Permite registrar los datos de cada estudiante, calcular su promedio, determinar su estado académico y actualizar los resultados generales del grupo.


**Capturas de la Ejecucion del Programa**

A continuación, se presentan las capturas de pantalla que muestran el funcionamiento del programa.

**Registro de estudiantes y calificaciones.**
<img width="1825" height="985" alt="image" src="https://github.com/user-attachments/assets/ff203366-1f12-4da7-acac-05a1da7a3cc6" />


**Validacion de datos: Aqui se puede comprobar que se sucede cuando se ingresan datos fuera de rango.**
<img width="1382" height="421" alt="image" src="https://github.com/user-attachments/assets/87b18d40-5bd9-4b98-a736-831a5a6d90d7" />


**Resumen general del grupo, incluyendo aprobados, reprobados y promedio más alto.**
<img width="867" height="254" alt="image" src="https://github.com/user-attachments/assets/bd71d767-af8a-4f7e-ae79-70dc838124f9" />


**Procesamiento de otro grupo**
<img width="1002" height="798" alt="image" src="https://github.com/user-attachments/assets/c8ce480b-de52-4aaf-9db2-78577a0c62df" />


**Esta captura es continuacion del captura anterior donde se procesan 3 estudiantes, aqui se muestra como se muestra el resuemen cuando hay dos personas con el mismo promedio**
<img width="1105" height="750" alt="image" src="https://github.com/user-attachments/assets/560d2261-81a0-4699-b0b3-048300c32a52" />



