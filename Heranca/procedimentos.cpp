#include "procedimentos.hpp"
using namespace std;
int qualproduto(){
	int n;
	cout<< "QUAL PRODUTO? "<<endl;
	cout<< "1 - PIZZA"<<endl;
	cout<< "2 - REFRIGERANTE"<<endl;
	cout<< "3 - CHOCOLATE"<<endl;
	cout<< "4 - CARRO"<<endl;
	cout<< "5 - LIVRO"<<endl;
	cout<< "6 - CELULAR"<<endl;
cin >> n;
	return n; 
}
int menu(){
	int n;
	cout<< "MENU: "<<endl;
	cout<< "1 - ADICIONAR PRODUTO "<<endl;
	cout<< "2 - REMOVER PRODUTO "<<endl;
	cout<< "3 - QUANTIDADE DE PRODUTOS NO DEPOSITO "<<endl;
	cout<< "4 - INFORMAR SE O DEPOSITO ESTA VAZIO "<<endl;
	cout<<"5 - INFORMAR O PRODUTO DE MAIOR VALOR "<<endl;
	cout <<"0 - SAIR"<<endl;
	cin >>n;
	return n;
}
void lerpizza(Pizza *pizza, Deposito *deposito,int pic, int dec){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
float preco1;
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					pizza[pic].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					pizza[pic].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					pizza[pic].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin.ignore();
					getline(cin, descricao1);
					pizza[pic].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					pizza[pic].datafab=fabricacao1;
					cout<<"Informe a data de validade "<<endl;
					cin>>datav;
					pizza[pic].dataval=datav;
					cout<<"Informe o genero(alimenticio,limpeza, etc) "<<endl;
					cin>>genero1;
					pizza[pic].genero=genero1;
					deposito[dec].nome=pizza[pic].nome;
					deposito[dec].preco=pizza[pic].preco;
					deposito[dec].marca=pizza[pic].marca;
					deposito[dec].descricao=pizza[pic].descricao;
					deposito[dec].datafab=pizza[pic].datafab;
					dec++;
}
void lerrefrigerante(Refrigerante *refrigerante, Deposito *deposito,int rec, int dec){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
float preco1;
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					refrigerante[rec].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					refrigerante[rec].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					refrigerante[rec].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin.ignore();
					getline(cin, descricao1);
					refrigerante[rec].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					refrigerante[rec].datafab=fabricacao1;
					cout<<"Informe a data de validade "<<endl;
					cin>>datav;
					refrigerante[rec].dataval=datav;
					cout<<"Informe o genero(alimenticio,limpeza, etc) "<<endl;
					cin>>genero1;
					refrigerante[rec].genero=genero1;
					deposito[dec].nome=refrigerante[rec].nome;
					deposito[dec].preco=refrigerante[rec].preco;
					deposito[dec].marca=refrigerante[rec].marca;
					deposito[dec].descricao=refrigerante[rec].descricao;
					deposito[dec].datafab=refrigerante[rec].datafab;
}

void lerchocolate(Chocolate *chocolate, Deposito *deposito,int chc, int dec){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
float preco1;
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					chocolate[chc].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					chocolate[chc].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					chocolate[chc].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin.ignore();
					getline(cin, descricao1);
					chocolate[chc].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					chocolate[chc].datafab=fabricacao1;
					cout<<"Informe a data de validade "<<endl;
					cin>>datav;
					chocolate[chc].dataval=datav;
					cout<<"Informe o genero(alimenticio,limpeza, etc) "<<endl;
					cin>>genero1;
					chocolate[chc].genero=genero1;
					deposito[dec].nome=chocolate[chc].nome;
					deposito[dec].preco=chocolate[chc].preco;
					deposito[dec].marca=chocolate[chc].marca;
					deposito[dec].descricao=chocolate[chc].descricao;
					deposito[dec].datafab=chocolate[chc].datafab;
}
void lercarro(Carro *carro, Deposito *deposito,int cac, int dec){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
int durabilidade1;
float preco1;
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					carro[cac].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					carro[cac].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					carro[cac].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin.ignore();
					getline(cin, descricao1);
					carro[cac].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					carro[cac].datafab=fabricacao1;
					cout<<"Informe o material predominante "<<endl;
					cin>>mpred;
					carro[cac].material=mpred;
					cout<<"Informe a durabilidade "<<endl;
					cin>>durabilidade1;
					carro[cac].durabilidade=durabilidade1;
					deposito[dec].nome=carro[cac].nome;
					deposito[dec].preco=carro[cac].preco;
					deposito[dec].marca=carro[cac].marca;
					deposito[dec].descricao=carro[cac].descricao;
					deposito[dec].datafab=carro[cac].datafab;
}
void lerlivro(Livro *livro, Deposito *deposito,int lic, int dec){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
int durabilidade1;
float preco1;
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					livro[lic].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					livro[lic].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					livro[lic].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin.ignore();
					getline(cin, descricao1);
					livro[lic].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					livro[lic].datafab=fabricacao1;
					cout<<"Informe o material predominante "<<endl;
					cin>>mpred;
					livro[lic].material=mpred;
					cout<<"Informe a durabilidade "<<endl;
					cin>>durabilidade1;
					livro[lic].durabilidade=durabilidade1;
					deposito[dec].nome=livro[lic].nome;
					deposito[dec].preco=livro[lic].preco;
					deposito[dec].marca=livro[lic].marca;
					deposito[dec].descricao=livro[lic].descricao;
					deposito[dec].datafab=livro[lic].datafab;
}
void lercelular(Celular *celular, Deposito *deposito,int cec, int dec){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
int durabilidade1;
float preco1;
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					celular[cec].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					celular[cec].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					celular[cec].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin.ignore();
					getline(cin, descricao1);
					celular[cec].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					celular[cec].datafab=fabricacao1;
					cout<<"Informe o material predominante "<<endl;
					cin>>mpred;
					celular[cec].material=mpred;
					cout<<"Informe a durabilidade (em anos)"<<endl;
					cin>>durabilidade1;
					celular[cec].durabilidade=durabilidade1;
					deposito[dec].nome=celular[cec].nome;
					deposito[dec].preco=celular[cec].preco;
					deposito[dec].marca=celular[cec].marca;
					deposito[dec].descricao=celular[cec].descricao;
					deposito[dec].datafab=celular[cec].datafab;
}
void deletarpizza(Pizza *pizza, Deposito *deposito, int pic,int dec){
	cout << "QUAIS DESTAS PIZZAS DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<pic;z++){
						cout << pizza[z].nome << "     -    DATA FAB: " << pizza[z].datafab<<endl;
					}
					string nome1;
					string fabricacao1;
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<pic;j++){
						if(pizza[j].nome == nome1 && pizza[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<pic;z++){
							pizza[z].nome = pizza[z+1].nome;
							pizza[z].preco= pizza[z+1].preco;
							pizza[z].marca=pizza[z+1].marca;
							pizza[z].descricao=pizza[z+1].descricao;
							pizza[z].datafab=pizza[z+1].datafab;
							pizza[z].dataval=pizza[z+1].dataval;
							pizza[z].genero=pizza[z+1].genero;
					}
					cout  <<" PIZZA REMOVIDA, LISTA DE PIZZAS: "<<endl;
					for(int z=0;z<pic;z++){
						cout << pizza[z].nome << "     -    DATA FAB: " << pizza[z].datafab<<endl;
					}
}
void deletarrefrigerante(Refrigerante *refrigerante, Deposito *deposito, int rec,int dec){
					cout << "QUAIS DESTES REFRIGERANTES DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<rec;z++){
						cout << refrigerante[z].nome << "     -    DATA FAB: " << refrigerante[z].datafab<<endl;
					}
					string nome1;
					string fabricacao1;
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<rec;j++){
						if(refrigerante[j].nome == nome1 && refrigerante[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<rec;z++){
							refrigerante[z].nome = refrigerante[z+1].nome;
							refrigerante[z].preco= refrigerante[z+1].preco;
							refrigerante[z].marca=refrigerante[z+1].marca;
							refrigerante[z].descricao=refrigerante[z+1].descricao;
							refrigerante[z].datafab=refrigerante[z+1].datafab;
							refrigerante[z].dataval=refrigerante[z+1].dataval;
							refrigerante[z].genero=refrigerante[z+1].genero;
					}
					cout  <<" REFRIGERANTE REMOVIDO, LISTA DE REFRIGERANTES: "<<endl;
					for(int z=0;z<rec;z++){
						cout << refrigerante[z].nome << "     -    DATA FAB: " << refrigerante[z].datafab<<endl;
					}
}
void deletarchocolate(Chocolate *chocolate, Deposito *deposito, int chc,int dec){
					cout << "QUAIS DESTES CHOCOLATES DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<chc;z++){
						cout << chocolate[z].nome << "     -    DATA FAB: " << chocolate[z].datafab<<endl;
					}
					string nome1;
					string fabricacao1;
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<chc;j++){
						if(chocolate[j].nome == nome1 && chocolate[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<chc;z++){
							chocolate[z].nome = chocolate[z+1].nome;
							chocolate[z].preco= chocolate[z+1].preco;
							chocolate[z].marca=chocolate[z+1].marca;
							chocolate[z].descricao=chocolate[z+1].descricao;
							chocolate[z].datafab=chocolate[z+1].datafab;
							chocolate[z].dataval=chocolate[z+1].dataval;
							chocolate[z].genero=chocolate[z+1].genero;
					}
					cout  <<" CHOCOLATE REMOVIDO, LISTA DE CHOCOLATES: "<<endl;
					for(int z=0;z<chc;z++){
						cout << chocolate[z].nome << "     -    DATA FAB: " << chocolate[z].datafab<<endl;
					}
}