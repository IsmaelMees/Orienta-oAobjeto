
#include <iostream>
using namespace std;

class vetores{ 
	int vetor[5]; 
	int p, a,x;
public:
vet(int vet[5]);
    
};
int vetores::vet(int vet[5]){
for (p=0;p<5;p++){
    cout << "Digite o " << p << endl;
    cin >> a;
    vet[p] = a;
}

for (p=0;p<5;p++){
    for (x=0;x<5;x++){
        if(vet[p] == vet[x]){
        if(p != x){
    cout << "O numero repetido " << vet[p] <<  " na posicao " << p << " e " << x << endl;
    break;
}
}
}
}
}
	int main(){
	int vet[5];
vetores vetts;
vetts.vet(vet);
	return 0;

}

