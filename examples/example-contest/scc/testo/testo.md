# Componenti fortemente connesse

Calcolare il numero di componenti fortemente connesse di un dato un
grafo orientato.

## Implementazione

Dovrai sottoporre esattamente un file con estensione `.c` o `.cpp`.

Tra gli allegati a questo task troverai un template (`scc.c`, `scc.cpp`)
con un esempio di implementazione.

Dovrai implementare la seguente funzione:

   C/C++  `int scc(int N, int E, int da[], int a[]);`

L'intero $N$ rappresenta il numero di vertici del grafo.

-   L'intero $E$ rappresenta il numero di archi del grafo.

-   Gli array `da` e `a`, indicizzati da $0$ a $E-1$, contengono gli
    estremi di ogni arco del grafo, cioè per ogni $i$ fra $0$ ed $E-1$
    esiste un arco che parte da `da`$[i]$ e arriva a `a`$[i]$. I vertici
    sono indicizzati da $0$ a $N-1$

-   La funzione dovrà restituire il numero di componenti fortemente
    connesse.

Il grader chiamerà prima la funzione `scc` e ne stamperà il valore
restituito sul file di output.

## Grader

Nella directory relativa a questo problema è presente una versione
semplificata del grader usato durante la correzione, che potete usare
per testare le vostre soluzioni in locale. Il grader di esempio legge i
dati di input dal file `input.txt`, chiama le funzioni che dovete
implementare e scrive il file `output.txt`, secondo il seguente formato.

Il file `input.txt` è composto da $E+1$ righe, contenenti:

-   Riga $1$: gli interi $N$ ed $E$ separati da uno spazzio.

-   Righe da $2$ a $E+1$: contengono ognuna due interi che indicano che
    esiste un grafo con vertici (orientati) i due numeri.

Il file `output.txt` è composto da un'unica riga, contenente:

-   Riga $1$: il valore restituito dalla funzione `scc`.

## Vincoli

-   $1 \le N \le 10\,000$.

-   $1 \le E \le 100\,000$.

## Esempio

| `input.txt`                                                  | `output.txt` |
| ------------------------------------------------------------ | ------------ |
| 8 8<br/>0 4<br/>4 5<br/>5 6<br/>6 7<br/>7 2<br/>2 3<br/>3 4<br/>1 2 | 3            |



