from random import randint #librerias


def Quick_sort(V): #metodo quicksort
    pivote = len(V)//2 #seleccion de  pivote
    menor, igual, mayor = [],[],[] #crear array
    
    for i in range(len(V)): #ciclo para recorrer array
        if(V[i] < V[pivote]): menor.append(V[i]) 
        elif(V[i]> V[pivote]): mayor.append(V[i]) 
        else: igual.append(V[i])
        
    if len(menor)>1: 
        menor = Quick_sort(menor) #organiza
    if len(mayor)>1: #organize
        mayor = Quick_sort(mayor)
    return menor + igual + mayor #retornamos array organizado


def main(): #method main
    
    elementos = (input("Escriba la Sucesion de numeros separados por comas \n")) #pedimos los datos
    
    elementos_2 = elementos.split("," or ".") #usamos el split
 
    print(Quick_sort(elementos_2))
    
main()
