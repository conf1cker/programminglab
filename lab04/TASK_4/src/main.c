int main() 
{
   
	#define SIZE 25

	float x = -5;
	float y[SIZE];
	for (int a = 0;a < SIZE; a++, x = x + 0.25){
        
		if ((-5 < x) && (x <= -1) ){
			y[a] = -1/x;

		} else if (-1 < x && x <= 1 ){
			y[a] = x * x;
            
		} else {
			y[a] = 1;
            
		}
	}
    
	return 0;

}

