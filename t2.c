void main(){
	int d[5][5];
	int w[5][5];
	int r[5][5];
	int i,j,k;

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			d[i][j] = 5;
			w[i][j] = 5;
		}
	}

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			r[i][j] = 0;
			for(k=0; k<5; k++){
				r[i][j] = r[i][j] + d[i][k] * w[k][j];
			}
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d\n", r[i][j]);
		}
	}

}
