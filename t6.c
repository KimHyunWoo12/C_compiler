void main(){
	int hd = 0;
	int n;
	int i;
	for(n = 2; n <= 100; n++){
		for(i=2; i<n; i++){
			if(n%i == 0){
				hd = 1;
				break;
			}
		}
		if(!hd){
			printf("%d\n",n);
		}
		hd = 0;
	}
}
