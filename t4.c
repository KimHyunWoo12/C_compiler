int s[100];
int x;

void init_s(){
	int i;
	for(i=100; i>0; i--){
		s[i] = i;
	}
}

int search(int l, int h){
	int m;
	
	if(l > h){
		return 0;
	}
	else{
		m = (l + h)/2;
		if(x == s[m]){
			return m;
		}
		else if(x < s[m]){
			search(l, m-1);
		}
		else{
			search(m + 1, h);
		}
	}
}

int main(){
	x = 2;
	init_s();
	x = search(0,99);
	printf("%d", x);
}
