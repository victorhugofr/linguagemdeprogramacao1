#include "funcionario.hpp"
#include "operario.hpp"
#include "empresa.hpp"
#include "gerente.hpp"
#include "secretaria.hpp"
#include <list>
#include <iterator>
using namespace std;
int main(){
	string nome1,admissao1,fabrica;
	int salario1;
	Empresa *empresa;
	empresa= new Empresa[10];

	Operario *operario;
	operario = new Operario[10];

	Secretaria *secretaria;
	secretaria = new Secretaria[10];

	Gerente *gerente;
	gerente = new Gerente[10];
	int qtdempresas = 0, rmenuprincipal,rmenuempresa,qualempresa;


	if(rmenuprincipal!=1){
		menuprincipal(empresa,qtdempresas);
		qtdempresas++;
	}else if (rmenuprincipal==1){
			cout<<"DESEJA GERENCIAR QUAL EMPRESA?"<<endl;
			for(int n=0;n<qtdempresas;n++){
				cout<<n<<" - "<<empresa[n].nome<<endl;
				cout<<"    "<<empresa[n].cnpj<<endl;
			}
		cin>>qualempresa;
		rmenuempresa = menuempresa();
			if(rmenuempresa==1){           // ADICIONAR FUNCIONARIO

				cout<<"INFORME O TIPO DE FUNCIONARIO:"<<endl;
				cout<<"1 - OPERARIO"<<endl;
				cout<<"2 - SECRETARIA"<<endl;
				cout<<"3 - GERENTE"<<endl;
				cin>>t;
				if(t==1){ // CASO FOR OPERARIO
					cout<<"INFORME O NOME DO OPERARIO"<<endl;
					cin>>nome1;
					empresa[qualempresa].operario[qoperario].nome = nome1;
					cout<<"INFORME O SALARIO DO OPERARIO"<<endl;
					cin>>salario1;
					empresa[qualempresa].operario[qoperario].salario = salario1;
					cout<<"INFORME A DATA DE ADMISSAO DO OPERARIO"<<endl;
					cin>>admissao1;
					empresa[qualempresa].operario[qoperario].admissao = admissao1;
					cout<<"INFORME QUAL FABRICA DO OPERARIO"<<endl;
					cin>>fabrica
					empresa[qualempresa].operario[qoperario].nomefabrica = fabrica;
				}
			}
	}
	

}