map<int,int> primeDecomp(int n) {
	map<int,int> pf;
	int pfidx = 0, PF = primeStuff[pfidx];
	while(PF*PF <= n) {
		while(n % PF == 0) {
			n /= PF;
			pf[PF]++;
		}
		PF = primeStuff[++pfidx];
	}
	if (n != 1)
		pf[n]++;
	return pf;
}