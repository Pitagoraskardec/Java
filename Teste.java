import javax.swing.JOptionPane;
public class Teste{
	public static void main (String[]args){
		Triangulo triangulo = new Triangulo();
		Quadrado quadrado = new Quadrado();
		Trapezio trapezio = new Trapezio();
		Circunferencia circunferencia = new Circunferencia();
		double escolha;
		escolha = Double.parseDouble(JOptionPane.showInputDialog("Quais das Formas Deseja calcular a Area Digite o numero : "+ 
															  "\n 1.00 - Circunferencia"+
																"\n 2.00 - Quadrado"+
																"\n3.00 - Trapezio"+
																"\n4.00 - Triangulo: "));
		if(escolha == 1.00){
			circunferencia.set_Dados();
			circunferencia.calcularArea();
			circunferencia.get_Dados();
			JOptionPane.showMessageDialog(null,"Area da circunferencia: " + circunferencia.get_Dados());
		}else{
				if(escolha == 2.00){
					quadrado.set_Dados();
					quadrado.calcularArea();
					quadrado.get_Dados();
					JOptionPane.showMessageDialog(null,"Area do Quadrado: " + quadrado.get_Dados());
				}else{
					if(escolha == 3.00){
						trapezio.set_Dados();
						trapezio.calcularArea();
						trapezio.get_Dados();
						JOptionPane.showMessageDialog(null,"Area do Trapezio: " + trapezio.get_Dados());
					}else{
						if(escolha == 4.00){
							triangulo.set_Dados();
							triangulo.calcularArea();
							triangulo.get_Dados();
							JOptionPane.showMessageDialog(null,"Area do triangulo: " + triangulo.get_Dados());
						}
					}
				}
		}
		
		
	}
}