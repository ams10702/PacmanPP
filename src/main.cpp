#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow{ { 2048u, 1700u }, "CMake SFML Project" };
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}