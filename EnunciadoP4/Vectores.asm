######################################################################
## Fichero: Vectores.asm
## Descripción: Programa que guarda en un Array C el resultado de A+4B
## Fecha última modificación: 2017-03-15
## Autores: Javier Delgado del Cerro (2017), Javier López Cano (2017) 
## Pareja: 4
## Asignatura: E.C. 1º grado
## Grupo de Prácticas: 2101
## Grupo de Teoría: 210
## Práctica: 4
## Ejercicio: 1
######################################################################

#############################
# Equivalente en C
# if (a < b) 
#	c = b;
# else
#	c = a;
# while (1);
#############################

.text 	
main:	
	add $s0, $zero, $zero   #Inicializamos la vriable i a 0
	lw $t0, N 				#Cargar en registro $t0 la variable N
	sll $t0, $t0, 2 		#Multiplicamos N por 4 para poder compararlo con i, que aumenta de 4 en 4
loop: 	
	slt $t1, $s0, $t0  		#$t1 será 1 si i<N
	beq $t1, $zero, fin 	#Si $t5 es 0, entonces no se cumple i<N, finalizamos el bucle
	lw $t2, A($s0)			#Cargamos A[i] en $t2
	lw $t3, B($s0)			#Cargamos B[i] en $t3
	sll $t3, $t3, 2 		#Multiplicamos B[i] por 4
	add $t4, $t2, $t3		#Sumamos A[i]+4*B[i]
	sw $t4, C($s0)			#Escribimos el resultado en C[i]
	addi $s0, $s0, 4 		#Sumamos de 4 en 4 para que corresponda a la siguiente posicion del array.
	j loop 					#Salto al principio del bucle de nuevo
fin: j fin
	
	
.data  						#Comienzo de seccion de datos de usuario
.align 2 					#Direccion alineada a palabra (multiplo de 2^2=4), no hace falta salvo que metamos a mano en .data una dirección que no sea múltiplo de 4
A: 2, 2, 4, 6, 5, 6, 7, 8, 9, 10  #Variable A, ocupa una palabra. También se podría poner a: .word 5, pero es redundante porque por defecto ocupa una palabra
B: -1, -5, 4, 10, 1, -2, 5, 10, -10, 0  #Variable B
C: .space 40  							#Variable C
N: 10									#Variable N, número de datos del array
# Se podría haber puesto a: .word 5, 6, 0 pero entonces no podríamos hacer lw $t1, b. Habría que hacer lw $t1, a($t7) metiendo previamente un 4 en $t7


