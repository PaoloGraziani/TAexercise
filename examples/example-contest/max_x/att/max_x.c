// problem: max_x, example of a solution file, Romeo Rizzi Jan 2015
int pesa(long int bigliaA, long int bigliaB);
void pensoCheMaxSia(long int risp);
void individua(long int n, long int maxLies) {
  if( pesa(0,n-1) > 0)  pensoCheMaxSia(0); 
  else pensoCheMaxSia(n-1); 
}
