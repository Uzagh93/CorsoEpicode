#include <stdio.h>

int main() 
{
    char Menu = 'O';
    char Nome[10];
    char Risposta;
    int Punteggio = 0;

    do    
    {
        printf("\nBenvenuto al Quiz di cultura generale!\nTi verranno proposte varie domande, ogni domanda risposta correttamente vale un punto, se sbagli sei fuori\nPronto a cominciare?");
        printf("\nPremi A per iniziare una nuova partita\nPremi B per uscire\n");
        scanf(" %c", &Menu); 
        getchar(); 

        switch (Menu)
        {
            case 'A':
                printf("\nInserisci il tuo nome\n");
                scanf("%s", Nome); 
                getchar(); 
                Punteggio = 0; 

                
                printf("\nDomanda numero 1\nQual è la più grande isola del mondo per superficie?");
                printf("\nA) Australia\nB) Madagascar\nC) Groenlandia\n");
                scanf(" %c", &Risposta); 
                getchar(); 

                if (Risposta == 'C')
                {
                    Punteggio++;
                    printf("\nRisposta corretta! Punteggio attuale: %d\n", Punteggio);
                    
                    
                    printf("\nDomanda numero 2\nQual è il fiume più lungo al mondo?");
                    printf("\nA) Il Nilo\nB) Il Po\nC) Il Danubio\n");
                    scanf(" %c", &Risposta); 
                    getchar(); 

                    if (Risposta == 'A')
                    {
                        Punteggio++;
                        printf("\nRisposta corretta! Punteggio attuale: %d\n", Punteggio);

                        
                        printf("\nDomanda numero 3\nIn che anno è stata scoperta l'America?");
                        printf("\nA) 1498\nB) 1492\nC) 1500\n");
                        scanf(" %c", &Risposta); 
                        getchar(); 

                        if (Risposta == 'B')
                        {
                            Punteggio++;
                            printf("\nBravissimo, %s! Hai finito il quiz.Il tuo punteggio finale è: %d\n", Nome, Punteggio);
                            
                        }
                        else
                        {
                            printf("\nRisposta sbagliata, %s! Il tuo punteggio finale è: %d\n", Nome, Punteggio);
                            printf("\nVuoi iniziare una nuova partita? Premi S per continuare oppure N per uscire\n");
                            scanf(" %c", &Menu); 
                            getchar();
                            if (Menu == 'S') {
                                Menu = 'O'; 
                            } else {
                                Menu = 'B'; 
                            }
                        }
                    }
                    else
                    {
                        printf("\nRisposta sbagliata, %s! Il tuo punteggio finale è: %d\n", Nome, Punteggio);
                        printf("\nVuoi iniziare una nuova partita? Premi S per continuare oppure N per uscire)\n");
                        scanf(" %c", &Menu); 
                        getchar();
                        if (Menu == 'S') {
                            Menu = 'O'; 
                        } else {
                            Menu = 'B'; 
                        }
                    }
                }
                else
                {
                    printf("\nRisposta sbagliata, %s! Il tuo punteggio finale è: %d\n", Nome, Punteggio);
                    printf("\nVuoi iniziare una nuova partita? Premi S per continuare oppure N per uscire\n");
                    scanf(" %c", &Menu); 
                    getchar();
                    if (Menu == 'S') {
                        Menu = 'O'; 
                    } else {
                        Menu = 'B'; 
                    }
                }
                break;

            case 'B':
                printf("\nSpero di rivederti presto!\n");
                break;

            default:
                printf("\nDevi inserire una lettera tra A o B\n");
                Menu = 'O';
        }
    } 
    while (Menu == 'O');

    return 0;
}