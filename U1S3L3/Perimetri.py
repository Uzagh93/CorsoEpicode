x = 'I'
pgreco=3.14
while (x == 'I'):
    x = (input ("Ciao , questo programma serve per calcolare i perimetri di varie forme geometriche. Premi\nA)Quadrato\nB)Cerchio\nC)Rettangolo\nD)Triangolo\n"))
    if(x == 'A'):
        a = int(input("Inserisci la lunghezza di un lato del quadrato\n"))
        print("Il perimetro del quadrato è di",a*4)
    elif (x == 'B'):
        a = int(input("Inserisci la lunghezza del raggio del cerchio\n"))
        print("Il perimetro del cerchio è di",2*a*pgreco)
    elif (x == 'C'):
        a = int(input("Inserisci l'altezza del rettangolo\n"))
        b = int(input("Inserisci la base del rettangolo\n"))
        print("Il perimetro del rettangolo è di",(b*2)+(a*2))
    elif (x == 'D'):
        a = int(input("Inserisci il primo lato del triangolo\n"))
        b = int(input("Inserisci il secondo lato triangolo\n"))
        c = int(input("Inserisci l'ultimo lato del triangolo\n"))
        print("Il perimetro del triangolo è di",a + b + c)    
    else:
        print("Hai inserito una lettera non valida")