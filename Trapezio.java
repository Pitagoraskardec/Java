//Base = base  maior
//base = base menor

public class Trapezio{
	double base,Base,altura;
	Trapezio(double base,double Base, double altura){
		this.base = base;
		this.Base = Base;
		this.altura = altura;
	}
	double get_areaTrapezio(){
		return ((Base +base)/2)*altura;
	}
}