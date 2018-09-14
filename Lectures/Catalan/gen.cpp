long long catalan[200];

long long solve(int n) {
	if (n % 2 == 1) return 0; // odd
	if (n == 0) return 1; // empty
	long long & r = catalan[n];
	if (r != -1) return r;
	r = solve(n - 2); // case (R)	
	// case (R)Q
	for (int i = 2; i < n; i += 2)
		r += solve(i - 2) * solve(n - i);
	return r;
}

int main() {
	memset(catalan, -1, sizeof catalan);
	for (int i = 0; i <= 60; i += 2)
		cout << solve(i) << " ";
	return 0;
}
