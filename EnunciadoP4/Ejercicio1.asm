######################################################################
## Fichero: Tutorial.s
## Descripci�n: Ejemplo de un programa en ensamblador
## Fecha �ltima modificaci�n: 2016-03-07
## Autores: Alberto S�nchez (2012, 2016), �ngel de Castro (2014)
## Asignatura: E.C. 1� grado
## Grupo de Pr�cticas: 
## Grupo de Teor�a: 
## Pr�ctica: 4
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

.text # Comienzo de seccion de codigo de usuario
main:	add $s0, $zero, $zero   # Cargar en registro $s0 la variable i. Aunque el formato est�ndar es lw $rt, imm($rs), se admiten variantes como lw $rt, label
	lw $t0, N # Cargar en registro $t0 la variable N
	sll $t0, $t0, 2 # Multiplicamos N por 4 para poder compararlo con i que aumenta de 4 en 4
loop: 	slt $t1, $s0, $t0  # $t1 ser� 1 si i<N
	beq $t1, $zero, bucle # Si $t5 es 0, entonces no se cumple i<N, nos vamos al else
	lw $t2, A($s0)
	lw $t3, B($s0)
	sll $t3, $t3, 2 
	add $t4, $t2, $t3
	sw $t4, C($s0)
	addi $s0, $s0, 4 # Sumamos de 4 en 4 para que corresponda a la siguiente posicion del array. Rama principal del if, $t3 hace de variable c
	j loop # Salto al principio del bucle de nuevo
bucle: j bucle
	
	
.data  # Comienzo de seccion de datos de usuario
.align 2 # Direccion alineada a palabra (multiplo de 2^2=4), no hace falta salvo que metamos a mano en .data una direcci�n que no sea m�ltiplo de 4
A: 2, 2, 4, 6, 5, 6, 7, 8, 9, 10  # Variable A, ocupa una palabra. Tambi�n se podr�a poner a: .word 5, pero es redundante porque por defecto ocupa una palabra
B: -1, -5, 4, 10, 1, -2, 5, 10, -10, 0  # Variable B
C: .space 40  # Variable C
N: 10
# Se podr�a haber puesto a: .word 5, 6, 0 pero entonces no podr�amos hacer lw $t1, b. Habr�a que hacer lw $t1, a($t7) metiendo previamente un 4 en $t7


