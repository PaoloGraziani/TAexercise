# For1_Std

Ricevete in input un numero naturale positivo $N$ e, in output, dovete
generare la sequenza:
$1$   $2$   $3$   $4$   $\cdots$   $N-2$   $N-1$   $N$

dei primi $N$ numeri naturali positivi, in bell'ordine. Potete separare
gli $N$ numeri in output tramite spazi oppure, se preferite, anche
andando a capo emulando cosı́ il comando `seq` della `bash` shell. Chi
conosce python penserà invece a:

`print range(1,N+1)`

Ma, qualunque sia il linguaggio scelto, cercate di ottenere il risultato
avvalendovi di un ciclo for.

Dati di input 
=============

In ingresso riceverete solamente un numero intero e positivo $N$.

Dati di output 
==============

In uscita dovete mandare, su una sola riga e separati da spazi, i primi
$N$ numeri naturali positivi, in bell'ordine. In altre parole, stampa su
`stdout` gli $N$ numeri della sequenza:\
$1$   $2$   $3$   $4$   $\cdots$   $N-2$   $N-1$   $N$

Esempio di input/output
=======================

| `input (da stdin)` | **`output (su stdout)`** |
| ------------------ | ------------------------ |
| `6 `               | `1 2 3 4 5 6 `           |

| `input (da stdin)` | **`output (su stdout)`** |
| ------------------ | ------------------------ |
| `10 `              | `1 2 3 4 5 6 7 8 9 10 `  |

Assunzioni e note 
=================

-   $1 \le N \le 10\,000$.

Subtask 
=======

-   **Subtask 0 \[10 punti\]:** i due esempi del testo.

-   **Subtask 1 \[15 punti\]:** $N = 17$.

-   **Subtask 2 \[25 punti\]:** $N \leq 20$.

-   **Subtask 4 \[50 punti\]:** nessuna restrizione.
