#ifndef CONTA_HPP
#define CONTA_HPP
class Conta{
private:
		int agencia;
		int numero;
		int saldo;
		int extrato;
			int saque[300]={0};
			int qtdsaque=0;
			int deposito[300]={0};
			int qtddeposito=0;
			int transferencia[300]={0};
			int qtdtransferencia=0;
public:
		int getagencia();
		void setagencia(int a);
		int getnumero();
		void setnumero(int a);
		int getsaldo();
		void setsaldo(int a);
		void setextrato(int n, int a);
		void getextrato();
};
#endif