int main()
{
	int x = 0;
	int k = 1;
	int m = 2;
	int n = 3;

	if ( n > m && m > k ){
	} else {
		if ( k > m && k > n ){
			x = n;
			n = k;
			k = x;
		} else if ( m > n ){
			x = n;
			n = m;
			m = x;
		}
		if ( k > m ){
			x = m;
			m = k;
			k = x;
		}
	}
	
	return 0;

}
