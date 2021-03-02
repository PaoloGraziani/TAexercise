int charCompare(char p, int pos_in_txt);
void pensoCheMatchingSia(int risposta[], int risp_len);

void solve(char *pattern, int patt_len, int text_len) {
	int sol[1];
	if(charCompare(pattern[0], 0)) {
		sol[0] = 0;
		pensoCheMatchingSia(sol, 1);	
	} else {
		sol[0] = 1;	
		pensoCheMatchingSia(sol, 1);	
	}
}
