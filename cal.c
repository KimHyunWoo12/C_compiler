int f1(int n);

void main()
{
	int i = 10;
	int s = 0;
	s = f1(i);
}

int f1(int n){
	if(n <= 1){
		return 1;
	}
	else{
		return n * f1(n-1);
	}
}

