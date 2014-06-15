import javax.swing.JOptionPane;
public class Circunferencia{
	double raio;
	void set_Dados(){
	raio = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor do Raio : "));
	}
	double calcularArea(){
	 return (raio*raio)*3.1415;
	}
	double get_Dados(){
		return calcularArea();
	}
	
}