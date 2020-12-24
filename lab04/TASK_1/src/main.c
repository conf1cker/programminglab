int main()
{

	float const PI = 3.14f;
	float r = 4;
	float l, s, v;
	char command = 'l', 's', 'v';
	char false = 'f';

	if ( command == 'l' ){
		l = 2 * PI * r;

	} else if ( command == 's' ){
		s = PI * r * r;

	} else if ( command == 'v' ){
		v = ( 4 * PI * r * r * r ) / 3;

	} else {
		false = ( command == 'f' );

	}

	return 0;

}
