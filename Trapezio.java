import javax.swing.JOptionPane;
public class Trapezio{
	double Base,base,altura;
	
	void set_Dados(){
	Base = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor da Base maior : "));
	base = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor da Base menos : "));
	altura = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor da altura : "));
	}
	
	double calcularArea(){
		return ((Base + base)/2)*altura;
	}
	double get_Dados(){
		return calcularArea();
	}
}