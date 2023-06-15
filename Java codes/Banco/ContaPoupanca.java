package Banco;

public class ContaPoupanca extends Conta {

    public ContaPoupanca(Cliente cliente) {
        super("Poupança", cliente);
    }

    @Override
    public void sacar(double valor) {
        if (super.checarSenha()) {
            if (valor <= 0) {
                System.out.println("\nValor para saque inválido.");
            } else if (super.saldo - valor < 0) {
                System.out.println("\nSaldo insuficiente.");
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
