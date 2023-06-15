package Banco;

import java.util.Scanner;

public class ContaCorrente extends Conta {
    Scanner scanner = new Scanner(System.in);
    public double credito = 0;

    public ContaCorrente(Cliente cliente) {
        super("Corrente", cliente);
        calcularCredito();
    }

    private void calcularCredito() {
        if (super.cliente.idade > 18 && super.cliente.salario > 1000) {
            this.credito = super.cliente.salario * 0.15;
        }
    }

    public void consultarCredito() {
        System.out.println("\nCrédito da conta: R$" + this.credito);
    }

    public void consultarLimite() {
        double limiteAtual;
        if (super.saldo < 0) {
            limiteAtual = super.saldo - this.credito;
        } else {
            limiteAtual = this.credito;
        }
        System.out.println("\nLimite atual: R$" + limiteAtual);
    }

    @Override
    public void sacar(double valor) {
        if (super.checarSenha()) {
            if (valor <= 0) {
                System.out.println("\nValor para saque inválido.");
            } else if (super.saldo - valor > super.saldo + credito && credito == 0) {
                System.out.println("\nSaldo insuficiente.");
            } else if (super.saldo - valor > super.saldo + credito && credito > 0) {
                System.out.println("\nSaldo e crédito insuficiente.");
            } else {
                super.saldo -= valor;
                System.out.println("\nSaque feito com sucesso.");
                System.out.println("Saldo atual: R$" + super.saldo);
            }
        } else {
            System.out.println("Senha incorreta mais de 3 vezes.");
        }
    }
}
