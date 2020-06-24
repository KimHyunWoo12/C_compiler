void main(){
	int i;
	int j;
	int tmp;
	int ar[100];
	
	for(i=0; i<10; i++){
		ar[i] = i;
	}
	for(i=0; i<9; i++){
		for(j=i+1; j< 10; j++){
			if(ar[i] < ar[j]){
				tmp = ar[i];
				ar[i] = ar[j];
				ar[j] = tmp;
			}
		}
	}
}
