#  Odd Cycle Finding

## Introduzione

Ape Maya è rimasta intrappolata in un nodo della tela di Tecla.
Tecla si affretta ad afferrarla ma, quando giunge su quel nodo,
si accorge di non avere appetito, e dice `BLEACH`. Va detto che l'appetito dei ragni è molto particolare: ogni volta che percorrono un filamento della loro rete,
essi invertono lo stato del loro stomaco tra `SLURP` e `BLEACH`.
Tecla deve quindi farsi un giretto nella rete sperando di tornare da Maya
in stato `SLURP`. 
Aiuta Tecla ad individuare una passeggiata funzionale al buon appetito.

## Dati di input

Il file `input.txt` contiene nella prima riga gli interi $N$ ed $M$, il numero di nodi e di collegamenti della rete.
Seguono $M$ righe, una per ogni collegamento.
Ciascuna di queste righe contiene due interi separati da spazio: $u$, $v$, dove $u$ e $v$ sono i due nodi ai capi del collegamento (due interi diversi tra $1$ ed $N$).

## Dati di output

Il file  `output.txt` deve contenere due linee.
La prima linea contiene un intero $L$,
il numero di spostamenti che Tecla compirà nella sua passeggiata.
Inizialmente Tecla è posta sul nodo $1$.
La seconda riga contiene $L+1$ numeri separati da spazio.
Il primo e l'ultimo di questi numeri sono necessariamente $1$ (nodo di partenza e di arrivo), gli altri sono i nodi come visitati da Tecla nell'ordine,e  possono aversi ripetizioni.

## Assunzioni

* $ 1 \leq M, N \leq 30$
* si garantisce l'esistenza di una soluzione: Ape Maya é spacciata!

## Subtask

* **Subtask 1 \[0 punti\]**:i due esempi del testo.
* **Subtask 2 \[10 punti\]:** esiste il collegamento tra ogni coppia di nodi.
* **Subtask 3 \[20 punti\]:** il nodo 1 è adiacente ad ogni altro nodo. Ed almeno un ulteriore collegamento \è presente.
* **Subtask 4 \[20 punti\]:** ogni nodo ha grado 2.
* **Subtask 5 \[50 punti\]:** nessuna restrizione, $M,N \leq 30$.

## Esempi

| `input.txt`                                 | `output.txt`      |
| ------------------------------------------- | ----------------- |
| 5 5<br/>1 2<br/>2 3<br/>1 4<br/>3 5<br/>4 5 | 6<br/>1 2 3 5 4 1 |

| `input.txt`                                         | `output.txt`      |
| --------------------------------------------------- | ----------------- |
| 5 6<br/>1 2<br/>2 3<br/>1 4<br/>2 5<br/>3 5<br/>4 5 | 5<br/>1 2 3 5 2 1 |

