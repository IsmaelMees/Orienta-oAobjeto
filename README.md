Encontre os valores repetidos

Instale o Dev++; Sistema operacional windows; Desenvolvido em C++ Autor: Ismael Data: 30-11-2021

Classe e metodo
class vetores{ 
	int vetor[5]; 
	int p, a,x;
public:
vet(int vet[5]);


int vetores::vet(int vet[5]){
for (p=0;p<5;p++){
    cout << "Digite o " << p << endl;      entrada de valores
    cin >> a;
    vet[p] = a;

processamento
for (p=0;p<5;p++){
    for (x=0;x<5;x++){
        if(vet[p] == vet[x]){
        if(p != x){
    cout << "O numero repetido " << vet[p] <<  " na posicao " << p << " e " << x << endl;
    break;

saida de valores na tela
int main(){
	int vet[5];
vetores vetts;
vetts.vet(vet);
	return 0;
