int main()
{
	int y[9];

	for (int x = -3, a = 0; x <= 3; x++, a++)
	{
		if ( x == 0 ){
			y[a] = 1;

		} else if ( x >= 1 ){
			y[a] = x - 1;

		} else if ( x <= -1 ){
			y[a] = x + 1;
		}
	}
	
	return 0;

}
