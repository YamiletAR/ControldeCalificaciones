
#include <iostream>
#include <string> // Se encargara de almacenar datos
#include <iomanip> // Se encargara de asegurar los dos decimales exactos en el promedio

using namespace std;

int main()
{
	cout << " SISTEMA DE CONTROL DE CALIFICACIONES CENTRO EDUCATIVO LA NUEVA ESCUELA \n\n";
	/* 
	Analisis
	Entrada
	Grupo: Curso y seccion del grupo de estudiantes
	Nombre: Nombre del estudiante
	Cantidad de estudiantes: Cantidad de estudiantes del grupo, se tendra que introducir un numero mayor a 0
	Calificacion: Calificacion del estudiante, se tendra que introducir 4 calificaciones entre 0 y 100
	Proceso
	Promedio: Calcular el promedio de cada estudiante e indicar si esta aprobado o reprobado
	Si el promedio es mayor o igual a 70 aprobado y si es menor de 70 reprobado
	Salida
	Curso y seccion del grupo de estudiantes promediados
	Se mostrara la cantidad de estudiantes aprobados y reprobados
	El promedio general del grupo de estudiantes registrados
	Nombre y promedio del estudiante con el promedio mas alto
	*/
	cout << fixed << setprecision(2); // Se asegura de que los promedios se muestren con dos decimales exactos
	string cursoSeccion;
	string nombreEstudiante;
	double calificacion1, calificacion2, calificacion3, calificacion4;
	int cantidadEstudiantes;
	char repetir;

	//BUCLE DO WHILE: Lo utilizo para permitir repetir el proceso con otro grupo (s/n)
	do {
		int aprobados = 0;
		int reprobados = 0;
		double sumaPromedios = 0;
		double mayorPromedio = 0;
		string mejorEstudiante = "";

			cout << "Ingrese curso y seccion del grupo a promediar:";
			getline(cin, cursoSeccion); // Se utiliza getline para permitir espacios en el nombre del curso y sección
			cout << endl;
		
			cout << "Ingrese la cantidad de estudiantes del grupo: ";
			cin >> cantidadEstudiantes;

			// BUCLE WHILE: Lo utilizo para validar que no pongan 0 ni numeros negativos
			while (cantidadEstudiantes <= 0) {
				cout << "Error: La cantidad debe ser mayor que 0. Intente de nuevo: ";
				cin >> cantidadEstudiantes;
			}

			cin.ignore(); // Limpia la memoria temporal del teclado (el Enter) antes de pedir texto
			cout << endl;

			//BUCLE FOR: Lo utilizo para registrar los datos de los estudiantes uno por uno
			for (int i = 1; i <= cantidadEstudiantes; i++) {
		
			cout << "Ingrese nombre y apellido del estudiante:";
			getline(cin, nombreEstudiante); // Se utiliza getline para permitir espacios en el nombre del estudiante
			cout << endl;
			
			//Introducir Calificaciones
			// Utilizo el BUCLE WHILE para validar que las calificaciones estén entre 0 y 100

			cout << "Ingrese Calificacion 1: ";
			cin >> calificacion1;
			while (calificacion1 < 0 || calificacion1 > 100) {
				cout << "Error: La calificacion debe estar entre 0 y 100. Intente de nuevo: ";
				cin >> calificacion1;
			}

			cout << "Ingrese Calificacion 2: ";
			cin >> calificacion2;
			while (calificacion2 < 0 || calificacion2 > 100) {
				cout << "Error: La calificacion debe estar entre 0 y 100. Intente de nuevo: ";
				cin >> calificacion2;
			}

			cout << "Ingrese Calificacion 3: ";
			cin >> calificacion3;
			while (calificacion3 < 0 || calificacion3 > 100) {
				cout << "Error: La calificacion debe estar entre 0 y 100. Intente de nuevo: ";
				cin >> calificacion3;
			}

			cout << "Ingrese Calificacion 4: ";
			cin >> calificacion4;
			while (calificacion4 < 0 || calificacion4 > 100) {
				cout << "Error: La calificacion debe estar entre 0 y 100. Intente de nuevo: ";
				cin >> calificacion4;
			}
			cout << endl;
				
			double promedioEstudiante = (calificacion1 + calificacion2 + calificacion3 + calificacion4) / 4.0;
			sumaPromedios = sumaPromedios + promedioEstudiante;

			cout << "RESULTADO\n";
			cout << "Estudiante: " << nombreEstudiante << "\n";
			cout << "Promedio: " << promedioEstudiante << "\n";

			// Condicionales para saber si está Aprobado (>= 70) o Reprobado (< 70)
			if (promedioEstudiante >= 70) {
				cout << "Estado: APROBADO" << endl;
				aprobados++;

			}

			else {
				cout << "Estado: REPROBADO" << endl;
				reprobados++;

			}
			/* La condicionales en este punto son para asegurar que si hay un "empate" en el promedio mas alto, 
			se muestren los nombres de los estudiantes que empataron y no solo se muestre el primero que se ingreso, 
			sino que se muestren todos los estudiantes que empataron en el promedio mas alto.	                      */
		
			if (promedioEstudiante > mayorPromedio) {
				mayorPromedio = promedioEstudiante;
				mejorEstudiante = nombreEstudiante; 
			}
			else if (promedioEstudiante == mayorPromedio) {
				mejorEstudiante = mejorEstudiante + " y " + nombreEstudiante; 
			}
			cin.ignore();// Limpia la memoria temporal del teclado (el Enter) antes de pedir texto
			cout << "----------------------------------------" << endl;

			}
	 
			// Calcular el promedio general de todo el grupo
			double promedioGeneral = sumaPromedios / cantidadEstudiantes;

			// Salida Final, mostrando el resumen general del grupo.
			cout << "       RESUMEN GENERAL DEL GRUPO        " << endl;
			cout << "Curso y Seccion: " << cursoSeccion << endl;
			cout << "Total de Estudiantes: " << cantidadEstudiantes << endl;
			cout << "Estudiantes Aprobados: " << aprobados << endl;
			cout << "Estudiantes Reprobados: " << reprobados << endl;
			cout << "Promedio General del Grupo: " << promedioGeneral << endl;
			cout << "Estudiante con mayor promedio: " << mejorEstudiante << " (" << mayorPromedio << ")" << endl;

			cout << "\n¿Desea procesar otro grupo? (s/n): ";
			cin >> repetir;
			cin.ignore(); // Limpiar el Enter pendiente antes de reiniciar el bucle
			cout << endl;

			} while (repetir == 's' || repetir == 'S');

			cout << "Fin del Programa. Gracias por usar el sistema." << endl;
	
}



