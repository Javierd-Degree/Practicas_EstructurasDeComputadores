######################################################################
## Fichero: Desensamblar.asm
## Descripción: Programa obtenido a partir del fichero desensamblar.txt
## Fecha última modificación: 2017-03-28
## Autores: Javier Delgado del Cerro (2017), Javier López Cano (2017) 
## Pareja: 4
## Asignatura: E.C. 1º grado
## Grupo de Prácticas: 2101
## Grupo de Teoría: 210
## Práctica: 4
## Ejercicio: 3
######################################################################


main:	
	lw $at, c  				#Cargamos en $at el contenido de la variable c
	sll $v0, $at, 8			#Multiplicamos c por 2^8 y lo guardamos en $v0
	lw $v1, d 				#Cargamos d en $v1
	or $a0, $v0, $v1		#Guardamos en $a0 $v0 or $v1
	addi $a1, $zero, 5		#Guardamos 5 en $a1
	slt $a2, $v1, $a1 		#Guardamos en $a1 el resultado de SLT($v1, $a0)
	beq $a2, $zero, rama	#Si el contenido de $a1 es mayor o igual que el de $v1, saltamos a rama
	sw $a0, b 				#Escribimos el contenido de $a0 en la posicion de b
	j fin 					#Saltamos incondicionalmente a fin
rama:	sw $a0, a 			#Escribimos el contenido de $a0 en la posicion de a

fin:	j fin 				#Acabamos el programa


.data
a: 0	
b: 0
c: 52922
d: 5
