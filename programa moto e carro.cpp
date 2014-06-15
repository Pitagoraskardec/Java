#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Veiculo{
	private:
		string modelo,fabricante,placa;
		float valor;
	public:
	    Veiculo (){
	    	valor=0;
	    }
	    ~Veiculo(){
	    }
		void set_dadoscarro(){
			cout<<"\ digite o modelo do carro : ";
			getline(cin,modelo);
			cout<<"\n digite o fabricante : ";
			getline(cin,fabricante);
			cout<<"\n digite a placa: ";
			getline(cin,placa);
			cout<<"\n digite o valor : ";
		    cout<<"\n";
			cin>>valor;
			cin.ignore();
		}
			void set_dadosmoto(){
			cout<<"\ digite o modelo da moto : ";
			getline(cin,modelo);
			cout<<"\n digite o fabricante : ";
			getline(cin,fabricante);
			cout<<"\n digite a placa: ";
			getline(cin,placa);
			cout<<"\n digite o valor : ";
		    cout<<"\n";
			cin>>valor;
			cin.ignore();
		}
		void print_dadoscarro(){
		    cout<<"\n Modelo : "<<modelo;
		    cout<<"\n Fabricante : "<<fabricante;
		    cout<<"\n placa : "<<placa;
		    cout<<"\n Valor : "<<valor;
		}
		void print_dadosmoto(){
		    cout<<"\n Modelo : "<<modelo;
		    cout<<"\n Fabricante : "<<fabricante;
		    cout<<"\n placa : "<<placa;
		    cout<<"\n Valor : "<<valor;
		}
		string ret_fabricantecarro(){
			return fabricante;
		}
		string ret_modelocarro(){
			return modelo;
		}
		string ret_placacarro(){
			return placa;
		}
		float ret_valorcarro(){
			return valor;
		}
		string ret_fabricantemoto(){
			return fabricante;
		}
		string ret_modelomoto(){
			return modelo;
		}
		string ret_placamoto(){
			return placa;
		}
		float ret_valormoto(){
			return valor;
		}
}; 
int main(){
	
	Veiculo lojacarro[2],lojamoto[2];
	string consulta;
	char d,p;
	float vmin,vmax;
    int op;
    do{
    cout<<"\n============================================================================";
    cout<<"\n=\t                lojals car                                   =";
    cout<<"\n=\t                                                                   =";
    cout<<"\n=\t                                                                   =";
    cout<<"\n=\t                                                                   =";
	cout<<"\n=\t           <1> Cadastrar Carros                                    =";
	cout<<"\n=\t           <2> Cadastrar Motos                                     =";
    cout<<"\n=\t           <3> Imprimir dados dos Carros                           =";
    cout<<"\n=\t           <4> Imprimir dados das Motos                            =";
    cout<<"\n=\t           <5> Consultar estoque de Carro                          =";
	cout<<"\n=\t           <6> Consultar estoque de Motos                          =";
	cout<<"\n=\t           <7> Consultar Carros por faixa de preco                 =";
	cout<<"\n=\t           <8> Consultar Motos por Faixa de preco                  =";
	cout<<"\n=\t           <9> fechar o progrmama                                  =";
	cout<<"\n============================================================================\n\t";
    cout<<"\nSua escolha : ";
	cin>>op;
    cin.ignore();
    switch(op){
    	case 1:
    			int t;
				cout<<" qual a quantidade de carros que vc deseja cadastrar ? ";
    			cin>>t;
				for(int a=0;a<t;a++){
	               lojacarro[a].set_dadoscarro();
	                
	           }
	    break;
	    case 2:
	    	   	for(int b=0;b<2;b++){
	               lojamoto[b].set_dadosmoto();
	               cout<<"\n";
	           }
		break;
		case 3:
	    		for(int c=0;c<2;c++){
	               lojacarro[c].print_dadoscarro();
	               cout<<"\n";
	           }
	    break;
	    case 4:
	    	   for(int e=0;e<2;e++){
	               lojamoto[e].print_dadosmoto();
	               cout<<"\n";
	           }
	    break;
		case 5 :
	            	do{
		               cout<<"\n Digite o fabricante a consultar : ";
		               getline(cin,consulta);
		               for(int f=0;f<2;f++){
			                if(consulta==lojacarro[f].ret_fabricantecarro()){
			
			                  lojacarro[f].print_dadoscarro();
			                  cout<<"\n";
		                                                          }
			                else
			                   cout<<"\n nao esta no estoque ";
	                             
		                                  }
		                        cout<<"\n Deseja fazer outra consulta (S/N)? ";
		                        cin>>d;
		                        cin.ignore();
	                }while(d=='s' || d=='S');
         break;
         case 6:
         	        	do{
		               cout<<"\ndigite o fabricante a consultar : ";
		               getline(cin,consulta);
		               for(int g=0;g<2;g++){
			                if(consulta==lojamoto[g].ret_fabricantemoto()){
			
			                  lojamoto[g].print_dadosmoto();
			                  cout<<"\n";
		                                                          }
			                else
			                   cout<<"\n nao esta no estoque ";
	                             
		                                  }
		                        cout<<"\n Deseja fazer outra consulta (S/N)? ";
		                        cin>>d;
		                        cin.ignore();
	                }while(d=='s' || d=='S');
	     break;
		 case 7:
	     	        do{
	  	                cout<<"\n Digite o valor inicial : ";
	                   	cin>>vmin;
	  	                cout<<"\n Digite o valor Final : ";
	  	                cin>>vmax;
	  	                for(int x=0;x<2;x++){
	  		                if(vmin<=lojacarro[x].ret_valorcarro() && vmax>=lojacarro[x].ret_valorcarro()){
	  		                     lojacarro[x].print_dadoscarro();
	  		                     cout<<"\n";
	  		                 }
	  		                 else
	  		                 cout<<"\n nao esta no estoque ";
	  	                }
	  	                cout<<"\n Deseja fazer outra consulta (S/N)?  ";
	                 	cin>>d;
	  	                cin.ignore();
	                    }while(d=='s' || d=='S');
	      break;
	      case 8:
	      	         do{
	  	                cout<<"\n Digite o valor inicial : ";
	                   	cin>>vmin;
	  	                cout<<"\n Digite o valor Final : ";
	  	                cin>>vmax;
	  	                for(int h=0;h<2;h++){
	  		                if(vmin<=lojamoto[h].ret_valormoto() && vmax>=lojamoto[h].ret_valormoto()){
	  		                     lojamoto[h].print_dadosmoto();
	  		                     cout<<"\n";
	  		                 }
	  		                 else
	  		                 cout<<"\n nao esta no estoque ";
	  	                }
	  	                cout<<"\n Deseja fazer outra consulta (S/N)?  ";
	                 	cin>>d;
	  	                cin.ignore();
	                    }while(d=='s' || d=='S');
	        break;
	      case 9:
	      	return 0;
	      break;
		  default:
	         cout<<"\n Somente uma das opcoes acima !\n";
	          
	    }
	    cout<<"\n Deseja voltar ao menu inicial (S/N)? ";
	    cin>>p;
	    	
    }while(p=='s' || p=='S');
    cout<<"\n\n";
   
   return 0;
}


