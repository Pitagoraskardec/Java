import javax.swing.JOptionPane;
public class Triangulo{
	double base = 0;
	double altura = 0;
	
        void set_Dados(){
			
			
			base = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor da \"Base\": "));
			altura = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor da \"Altura\": "));
		}
		
		double calcularArea(){
			
			return ((base * altura)/2);
		}
		
		double get_Dados(){
		
			return calcularArea();
			
		}
		
}