# Input/output da `std` (io\_std)
## Ricevere input ed erogare output sui canali standard associati al processo 

Ricevete in input un numero intero e,
in output, dovete ritornare lo stesso identico numero. Nessuna elaborazione è richiesta (è un esercizio di test ed acclimatamento).

Input ed output avverranno semplicemente attraverso i canali standard (`stdin` e `stdout`), non dovrai quindi aprire e/o
gestire alcun file. Una volta lanciato, il tuo programma deve leggere un singolo intero (così come se esso venisse immesso
da tastiera) e deve quindi restituire quello stesso intero (così come a scriverlo a terminale).


### Esempi
|input|output|
|-----|------|
| `17`| `17` |

### Assunzioni
- il numero intero in questione ha valore assoluto al massimo $1000$, può quindi essere convenientemete memorizzato nelle
 usuali variabili offerte dal tuo linguaggio di programmazione preferito (come le variabili di tipo `int` del C o
 C++, oppure quelle di tipo integer in Pascal).

### Subtask
- **Subtask 1 \[30 punti\]**: il tuo programma deve risolvere correttamente il caso d'esempio del testo (non vi serve nemmeno leggere l'input).
- **Subtask 2 \[30 punti\]**: il numero fornito in input è $13$.
- **Subtask 3 \[40 punti\]**: nessuna restrizione (oltre quella sul valore assoluto espressa nella sezione di "Assunzioni" generali).

#### Note generali sul sistema di sottoposizione (con valutazione a feedback immediato) delle vostre soluzioni

Al sistema di sottoposizione va sottomesso solo il file sorgente del vostro programma. Il nostro server compiler\`a tale sorgente avvalendosi del compilatore
suggerito dall'estensione del file da voi sottomesso.
