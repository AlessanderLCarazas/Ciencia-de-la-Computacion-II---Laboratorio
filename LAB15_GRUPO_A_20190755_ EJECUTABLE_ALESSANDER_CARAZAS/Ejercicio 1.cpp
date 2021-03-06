#include "iostream"
#include "vector"

using namespace std;

struct Partes_car{
	string nombre;
	string color;
};
class Producto1 {
public:
	vector<Partes_car> componentes;
	void ListaComp()const
	{
	    cout<<"=============================================================================="<<endl;
		cout << "\n Piezas del Automovil: "<<endl;
		for (size_t i = 0; i < componentes.size(); i++) {
			cout <<" - " <<componentes[i].nombre << " de color "<<componentes[i].color<<endl;
		}
		cout << "AUTOMOVIL TERMINADO!!!"<<endl;
	}
};

class IBuilder {
public:
	virtual ~IBuilder() {}
	virtual void ProducirPuertas() = 0;
	virtual void ProducirLlantas() = 0;
	virtual void ProducirTimon() = 0;
	virtual void ProducirAsientos() = 0;
	virtual void ProducirMotor() = 0;
	virtual void ProducirEspejos() = 0;
	virtual void ProducirVidrios() = 0;

	virtual void ProducirBateria() = 0;
	virtual void ProducirChasis() = 0;
	virtual void ProducirRadiador() = 0;
	virtual void ProducirCarroceria() = 0;
};

class BuilderEspecifico : public IBuilder {
private:
	Producto1* product;
	string colour;
public:

	BuilderEspecifico()
	{
		this->Reset();
	}
	~BuilderEspecifico()
	{
		delete product;
	}
	void Reset()
	{
		this->product = new Producto1();
	}
	void color(string pieza1, string color1)
	{
		Partes_car *pieza = new Partes_car();
		pieza->nombre = pieza1;
		pieza->color = color1;
		this->product->componentes.push_back(*pieza);
	}
	void ProducirPuertas() override
	{
		string color_auxi;
		cout<<"Ingrese el color de las puertas: ";
		cin>>color_auxi;
		Partes_car *pieza = new Partes_car();
		color("Puertas",color_auxi);
	}
	void ProducirLlantas() override
	{
		string color_auxi;
		cout<<"Ingrese el color de las Llantas: ";
		cin>>color_auxi;
		color("Llantas",color_auxi);
	}
	void ProducirTimon() override
	{
		string color_auxi;
		cout<<"Ingrese el color del Timon: ";
		cin>>color_auxi;
		color("Timon",color_auxi);
	}
	void ProducirAsientos() override
	{
		string color_auxi;
		cout<<"Ingrese el color de los Asientos: ";
		cin>>color_auxi;
		color("Asientos",color_auxi);
	}
	void ProducirMotor() override
	{
		string color_auxi;
		cout<<"Ingrese el color del Motor: ";
		cin>>color_auxi;
		color("Motor",color_auxi);
	}
	void ProducirEspejos() override
	{
		string color_auxi;
		cout<<"Ingrese el color de los Espejos: ";
		cin>>color_auxi;
		color("Espejos",color_auxi);
	}
	void ProducirVidrios() override
	{
		string color_auxi;
		cout<<"Ingrese el color de los Vidrios: ";
		cin>>color_auxi;
		color("Vidrios",color_auxi);
	}


	void ProducirBateria() override
	{
		string color_auxi;
		cout<<"Ingrese el color de la Bateria: ";
		cin>>color_auxi;
		color("Bateria",color_auxi);
	}
	void ProducirChasis() override
	{
		string color_auxi;
		cout<<"Ingrese el color del Chasis: ";
		cin>>color_auxi;
		color("Chasis",color_auxi);
	}
	void ProducirRadiador() override
	{
		string color_auxi;
		cout<<"Ingrese el color del Radiador: ";
		cin>>color_auxi;
		color("Radiador",color_auxi);
	}
	void ProducirCarroceria() override
	{
		string color_auxi;
		cout<<"Ingrese el color de la Carroceria: ";
		cin>>color_auxi;
		color("Carroceria",color_auxi);
	}
	Producto1* GetProducto()
	{
		Producto1* resultado = this->product;
		this->Reset();
		return resultado;
	}
};

class Director {
private:
	IBuilder* builder;
public:
	void set_builder(IBuilder* builder) {
		this->builder = builder;
	}
	void BuildProductoMin() {
	    this->builder->ProducirPuertas();
		this->builder->ProducirLlantas();
		this->builder->ProducirTimon();
		this->builder->ProducirAsientos();
		this->builder->ProducirMotor();
		this->builder->ProducirEspejos();
		this->builder->ProducirVidrios();
	}
	void BuildProductoCompleto() {
		this->builder->ProducirPuertas();
		this->builder->ProducirLlantas();
		this->builder->ProducirTimon();
		this->builder->ProducirAsientos();
		this->builder->ProducirMotor();
		this->builder->ProducirEspejos();
		this->builder->ProducirVidrios();

        this->builder->ProducirBateria();
		this->builder->ProducirChasis();
		this->builder->ProducirRadiador();
		this->builder->ProducirCarroceria();
	}
};
void ClienteCode(Director& director)
{
	int opcion;
	BuilderEspecifico* builder = new BuilderEspecifico();
	director.set_builder(builder);
	Producto1* p = builder->GetProducto();
	do{
		cout<<"=============================================================================="<<endl;
		cout<<"INGRESE QUE TIPO DE AUTOMOVIL DESEA: "<<endl;
		cout<<"=============================================================================="<<endl;
		cout<<"\n[1] Basico:"<<endl;
		cout<<"\t\tPiezas"<<endl;
		cout<<"\tPuertas"<<endl;
		cout<<"\tLlantas"<<endl;
		cout<<"\tTimon"<<endl;
		cout<<"\tAsientos"<<endl;
		cout<<"\tMotor"<<endl;
		cout<<"\tEspejos"<<endl;
		cout<<"\tVidrios"<<endl;
		cout<<"\n[2] Completo:"<<endl;
		cout<<"\t\tPiezas"<<endl;
		cout<<"\tPuertas"<<endl;
		cout<<"\tLlantas"<<endl;
		cout<<"\tTimon"<<endl;
		cout<<"\tAsientos"<<endl;
		cout<<"\tMotor"<<endl;
		cout<<"\tEspejos"<<endl;
		cout<<"\tVidrios"<<endl;
		cout<<"\tBateria"<<endl;
		cout<<"\tChasis"<<endl;
		cout<<"\tRadiador"<<endl;
		cout<<"\tCarroceria"<<endl;
		cout<<"\n[3] Personalizado"<<endl;
		cout<<"\tUsted elige que piezas desea."<<endl;
		cout<<"\n[4] Salir"<<endl;
		cout<<"=============================================================================="<<endl;
		cout<<"Ingrese Opcion:";
		cin>>opcion;
		cout<<"=============================================================================="<<endl;
		if(opcion==1)
        {
			director.BuildProductoMin();
			p = builder->GetProducto();
			p->ListaComp();
			delete p;
		}
		else if(opcion==2)
		{
			director.BuildProductoCompleto();
			p = builder->GetProducto();
			p->ListaComp();
			delete p;
		}
		else if(opcion==3)
		{
			int opcion1;
			do{
				cout<<"\n[1]Producir Puertas"<<endl;
				cout<<"[2]Producir Llantas"<<endl;
				cout<<"[3]Producir Timon"<<endl;
				cout<<"[4]Producir Asientos"<<endl;
				cout<<"[5]Producir Motor"<<endl;
				cout<<"[6]Producir Espejos"<<endl;
				cout<<"[7]Producir Vidrios"<<endl;
				cout<<"[8]Producir Bateria"<<endl;
				cout<<"[9]Producir Chasis"<<endl;
				cout<<"[10]Producir Radiador"<<endl;
				cout<<"[11]Producir Carroceria"<<endl;
				cout<<"\n[12]Ya no deseo mas piezas"<<endl;
				cout<<"===================================="<<endl;
				cout<<"Ingrese que desea llevar:";
				cin>>opcion1;
				cout<<"===================================="<<endl;
				if(opcion1 == 1)
                    builder->ProducirPuertas();
				else if(opcion1 == 2)
                    builder->ProducirLlantas();
				else if(opcion1== 3)
                    builder->ProducirTimon();
				else if(opcion1== 4)
                    builder->ProducirAsientos();
				else if(opcion1== 5)
                    builder->ProducirMotor();
				else if(opcion1== 6)
                    builder->ProducirEspejos();
				else if(opcion1== 7)
                    builder->ProducirVidrios();
				else if(opcion1== 8)
                    builder->ProducirBateria();
				else if(opcion1== 9)
                    builder->ProducirChasis();
				else if(opcion1== 10)
                    builder->ProducirRadiador();
				else if(opcion1== 11)
                    builder->ProducirCarroceria();
                else if(opcion1== 12)
                    cout<<"Automovil terminado"<<endl;
				else
                    cout<<"\nPieza no encontrada.\n";

			}while(opcion1!=12);
			p = builder->GetProducto();
			p->ListaComp();
			delete p;
		}
		else if(opcion==4)
        {
			cout<<"\nSaliendo.....\n";
		}else
		{
			cout<<"\nOpcion incorrecta...\n";
		}
	}while(opcion!=4);
	delete builder;
}

int main() {
	Director* director = new Director();
	ClienteCode(*director);
	delete director;
	return 0;
}
