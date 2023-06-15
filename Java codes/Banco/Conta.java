package Banco;

public abstract class Conta {
    public double saldo;
    public String tipo;
    public Cliente cliente;

    public Conta(String tipo, Cliente cliente) {
        this.tipo = tipo;
        this.cliente = cliente;
        this.saldo = 0;
    }

    public void depositar(double valor) {
        if (valor > 0) {
            this.saldo += valor;
            System.out.println("Depósito realizado com sucesso.");
            System.out.println("Saldo atual: R$" + this.saldo);
        } else {
            System.out.println("Depósito não realizado. Valor inválido.");
        }
    }

    public abstract void sacar(double valor);
}
