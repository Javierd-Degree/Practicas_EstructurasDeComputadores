######################################################################
## Fichero: Alcance.asm
## Descripci�n: Programa que calcula el alcance de un tiro parab�lico con V0=50m/s
## Fecha �ltima modificaci�n: 2017-03-22
## Autores: Javier Delgado del Cerro (2017), Javier L�pez Cano (2017) 
## Pareja: 4
## Asignatura: E.C. 1� grado
## Grupo de Pr�cticas: 2101
## Grupo de Teor�a: 210
## Pr�ctica: 4
## Ejercicio: 2
######################################################################

.text

main:	
	addi $sp, $zero, 0x4000		#Inicializamos la pila
	addi $sp, $sp, -4			#Hacemos push
	lw $s0, angulo				#Leemos el valor del �ngulo
	sw $s0, 0($sp)				#Metemos el �ngulo en la pila
	jal calculaAlcance			#Llamamos a la funcion 
	lw $s1, 0($sp)				#Hacemos pop de la pila y guardamos el resultado en $s1
	addi $sp, $sp, 4		
	sw $s1, resultado($zero) 	#Guardamos el resultado en la direcci�n de memoria resultado
fin:	j fin					#Finalizamos el programa
		
calculaAlcance:	
	lw $t0, 0($sp)				#Hacemos pop de la pila y guardamos el resultrado en $t0
	addi $sp, $sp, 4			#En este caso, como hacemos un pop y un push, los dos addi se podr�an omitir
	sll $t0, $t0, 2				#Multiplicamos por 4	
	lw $t1, lut($t0)			#Leemos el dato del angulo del array
	addi $sp, $sp, -4			#Hacemos push del dato en la pila
	sw $t1, 0($sp)	 
	jr $ra



.data
resultado: 0
angulo: 15
#Array con los valores del alcance seg�n los �ngulos de 0 a 45
lut: .word 0, 9, 17, 26, 35, 43, 52, 60, 69, 77, 86, 94, 102, 110, 117, 125, 132, 140, 147, 154, 161, 167, 174, 180, 186, 192, 197, 202, 207, 212, 217, 221, 225, 228, 232, 235, 238, 240, 243, 245, 246, 248, 249, 249, 250, 250 

