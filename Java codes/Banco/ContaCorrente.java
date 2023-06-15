package Banco;

import java.util.Scanner;

public abstract class ContaCorrente extends Conta {
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

    @Override
    public void sacar(double valor) {
        System.out.println("Insira a senha: ");
        String senha;
        int tentativas = 1;

        do {
            System.out.println("Tentativa " + tentativas);
            System.out.println("Insira a senha: ");
            senha = scanner.nextLine();
            tentativas++;
        } while (senha != super.cliente.senha);

        if (senha == super.cliente.senha) {
            if (valor <= 0) {
                System.out.println("Valor para saque inválido.");
            } else if (super.saldo - valor > super.saldo + credito && credito == 0) {
                System.out.println("Saldo insuficiente.");
            } else if (super.saldo - valor > super.saldo + credito && credito > 0) {
                System.out.println("Saldo e crédito insuficiente.");
            } else {
                super.saldo -= valor;
                System.out.println("Saque feito com sucesso.");
                System.out.println("Saldo atual: R$" + super.saldo);
            }
        }
    }
}
