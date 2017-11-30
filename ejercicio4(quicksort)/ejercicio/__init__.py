from random import randint #import library random


def Quick_sort(V): #method quicksort
    pivote = len(V)//2 #select pivote
    menor, igual, mayor = [],[],[] #create array
    
    for i in range(len(V)):#conditional where add array
        if(V[i] < V[pivote]): menor.append(V[i]) #add depending the condition
        elif(V[i]> V[pivote]): mayor.append(V[i]) #add depending the condition
        else: igual.append(V[i])
        
    if len(menor)>1: 
        menor = Quick_sort(menor) #organize
    if len(mayor)>1: #organize
        mayor = Quick_sort(mayor)
    return menor + igual + mayor #return array organized


def main(): #method main
    
    Tamain = (input("Escriba la Sucesion de numeros separados por comas \n")) #ask value
    print(Tamain)
    Tamain_2 = Tamain.split("," or ".")
    print(Tamain_2)
    print(Quick_sort(Tamain_2))
    
main()