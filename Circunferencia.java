public class Circunferencia{
	double raio;
	double pi = 3.1415;
	Circunferencia(double raio){
		this.raio = raio;
	}
	double get_areaCircunferencia(){
		return pi*(raio *raio);
	}
	
	
}