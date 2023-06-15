package Banco;

public class Cliente {
    public String nome;
    public int idade;
    public String cpf;
    public double salario;
    public String senha;

    public Cliente(String nome, int idade, String cpf, double salario, String senha) {
        this.nome = nome;
        this.idade = idade;
        this.cpf = cpf;
        this.salario = salario;
        this.senha = senha;
    }
}