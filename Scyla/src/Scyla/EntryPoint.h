#pragma once

#ifdef SC_PLATFORM_WINDOWS

extern Scyla::Application* Scyla::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Scyla::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Scyla only supports Windows
#endif