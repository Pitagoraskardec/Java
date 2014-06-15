public class Area{
	public static void main(String[] args){
	
	Triangulo teste1 = new Triangulo(2.00,5.00);
	Quadrado teste = new Quadrado(5.00);
	Circunferencia teste2 = new Circunferencia(5.00);
	Trapezio teste3 = new Trapezio(2.00,4.00,6.00);
	
		System.out.println("Area do quadrado e " + teste.get_areaQuadrado());
		System.out.println("Area do triangulo e " + teste1.get_areaTriangulo());
		System.out.println("Area da circunferencia e " + teste2.get_areaCircunferencia());
		System.out.println("Area do trapezio e " + teste3.get_areaTrapezio());
	}
}