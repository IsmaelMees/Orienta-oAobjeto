Encontre os valores repetidos

Instale o Dev++; Sistema operacional windows; Desenvolvido em C++ Autor: Ismael Data: 30-11-2021


class vetores{ 
	int vetor[5]; 
	int p, a,x;
public:
vet(int vet[5]);

int vetores::vet(int vet[5]){
for (p=0;p<5;p++){
    cout << "Digite o " << p << endl;
    cin >> a;
    vet[p] = a;

int main(){
	int vet[5];
vetores vetts;
vetts.vet(vet);
	return 0;
