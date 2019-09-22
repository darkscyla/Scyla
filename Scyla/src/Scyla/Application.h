#pragma once

#include "Core.h"

namespace Scyla
{
	class SCYLA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}