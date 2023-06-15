package Banco;

public abstract class ContaPoupanca extends Conta {
    public double credito = 0;

    public ContaPoupanca(Cliente cliente) {
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
