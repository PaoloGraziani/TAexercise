Descrizione del problema
========================

Devi scrivere una procedura che individui l'unica moneta falsa in un set
di $n$ monete numerate da $0$ ad $n-1$. Il file da sottomettere deve
avere la seguente struttura:

    #include "ourLibToPlay.h"
    
    void individua(long int n) {
       ...
    } 

Il parametro $n$ che viene passato alla funzione `individua` è il numero
di monete sotto esame. Tutte le $n$ monete hanno lo stesso peso, tranne
quella falsa, che è più leggera delle altre. Potrai servirti di una
bilancia a braccia eguali invocando, dalla tua implementazione della
procedura `individua`, la seguente funzione:

`int piatto_con_peso_maggiore()`

La funzione prevede i seguenti $3$ possibili valori di ritorno:
$$
\mbox{piatto_con_peso_maggiore()}\, =
    \left\{
       \begin{array}{ll}
          \textrm{NONE} & \mbox{se i due piatti della bilancia sono in perfetto equilibrio;}\\
          \textrm{LEFT} & \mbox{se il carico è maggiore sul piatto sinistro;}\\
          \textrm{RIGHT} & \mbox{se il carico è maggiore sul piatto destro.}\\
       \end{array}
    \right.
$$
 dove `LEFT`$=-1$, `NONE`$=0$ e `RIGHT`$=1$ sono $3$
costanti intere definite per voi in `ourLibToPlay.h`.

Per portare una certa moneta da dove si trova attualmente ad un certo
piatto (`LEFT`, `RIGHT`, oppure anche `NONE` nel caso si voglia togliere
la moneta dalla bilancia) si invoca la procedura:

`void collocaMoneta(long int moneta, int piatto)`

Quando trova la moneta falsa, la tua procedura deve consegnarla alla
zecca invocando:

`void denuncia(long int monetaFalsa)`

Subtask 
=======

-   **Subtask 0 \[2 punti\]:** la moneta falsa è la $2$.

-   **Subtask 1 \[3 punti\]:** la moneta falsa è la $0$ oppure la $1$.

-   **Subtask 2 \[5 punti\]:** $n=7$ e sono consentite al più $6$
    pesate.

-   **Subtask 3 \[5 punti\]:** $n=7$ e sono consentite al più $4$
    pesate.

-   **Subtask 4 \[10 punti\]:** $n=7$ e sono consentite al più $3$
    pesate.

-   **Subtask 5 \[10 punti\]:** $n=8$ e sono consentite al più $3$
    pesate.

-   **Subtask 6 \[10 punti\]:** vengono consentite al più $n-1$ pesate.

-   **Subtask 7 \[10 punti\]:** vengono consentite al più
    $\lfloor n/2 \rfloor$ pesate.

-   **Subtask 8 \[25 punti\]:** vengono consentite al più
    $\lceil \log_2 n \rceil$ pesate.

-   **Subtask 9 \[25 punti\]:** viene permesso solo quel minimo numero
    di pesate che, se impiegato sapientemente, consenta sempre di
    individuare la moneta falsa.

Assunzioni 
==========

-   Il programma termina dopo la prima chiamata alla funzione `denuncia`
    oppure allo scadere del tempo limite.

-   $1 \le n \le 1\,000\,000$.

Cosa deve contenere il File da Sottomettere, e come viene gestito dal server 
============================================================================

L'estensione del file che sottometti, \*.c, \*.cpp oppure \*.pas,
determina se esso viene compilato col compilatore del C (gcc), del c++
(g++) oppure del PASCAL (fpc). Le opzioni di compilazione, specifiche al
linguaggio, sono riportate nel dettaglio sulla pagina \"Descrizione\"
del problema in modo che tu possa simulare esattamente in locale cosa
succede sul server. I comandi di compilazione riportati assumono che il
nome del file sottomesso (privato di estensione) coincida col nome del
problema.

Nel caso di un problema interattivo come questo, dove il tuo programma
interagisce con altri da noi predisposti (il grader ed anche un header
da includere), i comandi di compilazione riportati compilano ed
assemblano i vari pezzi (il tuo programma, il grader, e l'header). Se
vuoi testare il comportamento del tutto in locale, devi allora
scaricarti il nostro grader e l'header che rendiamo disponibile tra gli
allegati alla pagina del problema.

Tra gli allegati potremmo inoltre fornire una soluzione di esempio che,
pur essendo compilabile sia in locale che dal server (ove ad esso
sottomessa), faccia pochi o nessun punto in quanto non significativa per
il problema in questione. In questo caso l'esempio compilabile reso
disponibile al sito è il seguente:

    //problem: lightCoin, example of a solution file, Romeo Rizzi Jan 2015
    #include "ourLibToPlay.h"
    void individua(long int n) {
      long int i;
      for(i = 0; i<n; i++) {
          if(i%3 == 1) collocaMoneta(i, LEFT);
          if(i%3 == 2) collocaMoneta(i, RIGHT);
      }
      int risp =  piatto_con_peso_maggiore();
      for(i = 0; i<n; i++)  collocaMoneta(i, NONE);
      if(risp == NONE) denuncia(0); //potrebbe essere la moneta 0 (sul piatto NONE)
      if(risp == LEFT) denuncia(2); //potrebbe essere la moneta 2 (sul piatto RIGHT) 
      if(risp == RIGHT) denuncia(1); //potrebbe essere la moneta 1 (sul piatto LEFT)
    }

Non risolverà molte istanze ma è compilabile sia in locale (se nella
stessa cartella collocate anche il grader e l'header resi disponibili
alla pagina del problema) sia ove sottoposto al server.
