int main()
{
	//task 1
	#define R1 16
	#define R2 14
	#define R3 18
	float R;
	R = ( R1 * R2 * R3 ) / ( R2 * R3 + R1 * R3 + R1 * R2 );
	return 0;
}

int main()
{
	//task 2
	const int X = 321;
	int a = X / 100;
	int b = X / 10 % 10;
	int c = X % 10;
	int result = c * 100 + b * 10 + a;
	return 0;
}

int main()
{
	//task 3
	const float X = 4;
	a = a * a; //2
	a = a * a; //4
	a = X;
	a = a * a * a; //3
        a = a * a; //6
        a = X;
        a = a * a; //2
        a = a * a; //4
        a = a * a; //8
	a = X;
	a = a * a; //2
	float b = a * a; //4
	b = b * b; //8
	a = b * a; //10
	return 0;
}

int main()
{
	//task 4
	const int P = 8;
	int x = 4512;
	int x1 = a / 1000; //4
	int x2 = a / 100 % 10; //5
	int x3 = a / 10 % 10; //1
	int x4 = a % 10; //2
	int result = x4 * 1 + x3 * P + x2 * P * P + x1 * p * p * p;
	return 0;
}

int main()
{
	//task 5
	const int X = 123;
	float a1 = X / 100; //1
	float a2 = X % 10; //3
	float y = a1 / a2; //0.333333
	y = y * 100; // 33.3333
	int z = (int) y; //33
	float result = (float) z / 100; //0.3300000
	return 0;
}

int main()
{
	//task 6
	const float A = 50;
	const float B = 52;
	float sum;
	sum = (( A + B ) * ( B - A + 1 ));
	return 0;
}
