//
// Created by jrl on 09/08/2021.
//

#include "application.h"
#include "exceptions.h"
#include <iostream>

namespace Tokyo::Core
{
    Application::Application()
    : m_window(800, 600, "Hello, Vulkan!") {

    }
    Application::~Application() = default;
    void Application::Run()
    {
        if(!m_window.IsInitialized())
            throw Tokyo::Exceptions::WindowNotInitializedException();

        while(!m_window.ShouldWindowClose())
        {
            glfwPollEvents();
        }
    }
}