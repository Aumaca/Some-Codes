package Banco;

import java.util.Scanner;
import java.util.Random;

public abstract class Conta {
    Scanner scanner = new Scanner(System.in);
    Random random = new Random();

    public double saldo;
    public String numConta;
    public String tipo;
    public Cliente cliente;

    public Conta(String tipo, Cliente cliente) {
        this.tipo = tipo;
        this.cliente = cliente;
        this.numConta = gerarNumConta();
        this.saldo = 0;
    }

    private String gerarNumConta() {
        String numConta = "";

        int min = 0;
        int max = 9;

        for (int i = 0; i < 10; i++) {
            numConta += Integer.toString(random.nextInt(max - min + 1) + min);
        }

        return numConta;
    }

    public void depositar(double valor) {
        if (valor > 0) {
            this.saldo += valor;
            System.out.println("\nDepósito na conta número " + this.numConta + " no nome de " + this.cliente.nome
                    + " realizado com sucesso.");
            System.out.println("Saldo atual: R$" + this.saldo);
        } else {
            System.out.println("\nDepósito não realizado. Valor inválido.");
        }
    }

    public boolean checarSenha() {
        String senha;
        int tentativas = 1;

        do {
            System.out.println("\nTentativa " + tentativas);
            System.out.println("Insira a senha: ");
            senha = scanner.nextLine();
            tentativas++;
            if (senha.equals(this.cliente.senha)) {
                break;
            }
        } while (tentativas <= 3);
        if (senha.equals(this.cliente.senha)) {
            return true;
        }
        return false;
    }

    public abstract void sacar(double valor);
}
