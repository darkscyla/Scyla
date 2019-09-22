#include <Scyla.h>

class Sandbox : public Scyla::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Scyla::Application* Scyla::CreateApplication()
{
	return new Sandbox();
}