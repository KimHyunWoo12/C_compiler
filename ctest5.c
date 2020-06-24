int fac(int n);
float ex(float g, int k);

void main(){
	float a, b, c;
	float result = 0;
	int i, j, k;
	int r = 0;
	int x1, x2, x3;

	a = 0.95;
	b = 0.04;
	c = 0.01;

	r = fac(20);

	for(i = 2; i <= 18; i++){
		for(j = 2; j <= 20-i; j++){
			k = 20 - (i + j);
		}
	}
}

int fac(int n){
	if(n == 1){
		return 1;
	}
	return n * fac(n-1);
}

float ex(float g, int k){
	int t;
	float temp = g;

	if(k == 1){
		return g;
	}
	else if(k == 0){
		return 1;
	}
	else if(k > 1){
		for(t = 1; t < k; t++){
			temp = temp*g;
		}
	}
	else{
		printf("음수는 아직 안함");
	}
	return temp;

}
