import javax.swing.JOptionPane;
public class Quadrado{
	double lado = 0;
	
	void set_Dados(){
		
			lado = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor do \"Lado\": "));
	}
	double calcularArea(){
		return (lado*lado);
	}
	double get_Dados(){
		return calcularArea();
	}
}