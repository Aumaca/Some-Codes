import Banco.*;

public class Main {
    public static void main(String args[]) {
        Cliente cliente1 = new Cliente("Carlos Augusto", 18, "11144477735", 1850, "1234");
        Cliente cliente2 = new Cliente("Augusta Ada", 208, "75263659075", 3000, "27121852");

        ContaPoupanca conta1 = new ContaPoupanca(cliente1);
        ContaCorrente conta2 = new ContaCorrente(cliente2);

        conta1.depositar(500);
        conta2.depositar(1000);

        // Sacar mais que possivel em conta poupanca
        conta1.sacar(600);

        // Sacar para sobrar 10
        conta2.consultarCredito();
        conta2.consultarLimite();
        conta2.sacar(1440);
        conta2.consultarLimite();
    }
}
