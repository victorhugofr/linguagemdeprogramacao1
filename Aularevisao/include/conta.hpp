#ifndef CONTA_HPP
#define CONTA_HPP
class Conta{
private:
		int agencia;
		int numero;
		int saldo;
public:
		int getagencia();
		void setagencia(int a);
		int getnumero();
		void setnumero(int a);
		int getsaldo();
		void setsaldo(int a);
};
#endif