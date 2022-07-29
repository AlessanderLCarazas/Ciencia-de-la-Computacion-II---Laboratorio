#include <iostream>

using namespace std;

class WinFactory
{
    public:
        virtual string Draw() const = 0;

};
class WinButton : public WinFactory
{
    public:
        string Draw() const override
        {
            return "Button Windows";

        }
};
class WinCheckBox : public WinFactory
{
	string Draw() const override
	{
		return "CheckBox Windows";
	}
};



class MacFactory
{
    public:
        virtual string Draw() const = 0;
        virtual string draw(const WinFactory& colaborador) const =0;
};
class MacButton : public MacFactory
{
    public:
        string Draw() const override
        {
            return "Dibujando Button Mac";
        }
        string draw(const WinFactory& colaborador) const override
        {
            const string resul = colaborador.Draw();
            return "Dibujando "+resul;
        }
};

class MacCheckBox : public MacFactory
{
    public:
        string Draw() const override
        {
            return "Dibujando CheckBox Mac.";
        }
        string draw(const WinFactory& colaborador) const override
        {
            const string resul = colaborador.Draw();
            return "Dibujando "+resul;
        }
};


class GUIFactory
{
    public:
        virtual WinFactory *CrearControlW() const = 0;
        virtual MacFactory *CrearControlM() const = 0;
};

class Button : public GUIFactory
{
        WinFactory *CrearControlW() const override
        {
            return new WinButton();
        }
        MacFactory *CrearControlM() const override
        {
            return new MacButton();
        }
};

class CheckBox : public GUIFactory
{
	WinFactory *CrearControlW() const override
	{
		return new WinCheckBox();
	}
	MacFactory *CrearControlM() const override
	{
		return new MacCheckBox();
	}
};

void Aplication(const GUIFactory& f, int os)
{
	const WinFactory* Windows = f.CrearControlW();
	const MacFactory* Mac = f.CrearControlM();

	if(os == 1)
    {
		cout<<"\n"<<Mac->draw(*Windows)<<endl;
		delete Windows;
	}
	else
	{
		cout<<"\n"<<Mac->Draw()<<endl;
		delete Mac;
	}
}

int main() {
	cout<<"Cliente: Windows ";
	Button* f1 = new Button();
	Aplication(*f1, 1); // 1 - Windows
	delete f1;

	cout <<endl;

	cout<<"Cliente: Mac ";
	Button* f2 = new Button();
	Aplication(*f2, 2);
	delete f2;

	return 0;
}
