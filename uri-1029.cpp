#include <bits/stdc++.h>

using namespace std;

int main(){
	int vetor[40];
	int num_chamada[40];

	for(int x = 0; x < 40; x++){
		vetor[x] = -1;
		num_chamada[x] = -1;
	}

	vetor[0] = 0;
	vetor[1] = 1;

	num_chamada[0] = 1;
	num_chamada[1] = 1;

	int n;

	cin >> n;

	while(n--){
		int x;
		cin >> x;


		for(int i = 2; i <= x; i++){
			if(vetor[i] == -1){
				vetor[i] = vetor[i-1] + vetor[i-2];
				num_chamada[i] = num_chamada[i-1] + num_chamada[i-2] + 1;
			}
		}

		printf("fib(%d) = %d calls = %d\n", x, num_chamada[x]-1, vetor[x]);

	}


	return 0;
}