#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

int main()
{
    constexpr int pointCount = 300;
    const float mradius = 100;
    const float period = 2.f;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(
        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Polar Rose",
        sf::Style::Default, settings);
    sf::Clock clock;

    sf::ConvexShape rose;
    rose.setFillColor(sf::Color(0xFF, 0x80, 0x10));

    sf::Vector2f position = {400, 300};
    const float speed = 20.f;

    sf::Vector2f center = {400, 300};

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        rose.setPointCount(pointCount);
        for (int i = 0; i < pointCount; ++i)
        {
            float angle = float(2 * M_PI * i) / float(pointCount);
            float radius = 200 * sin(6 * angle);
            sf::Vector2f point = {
                radius * std::sin(angle),
                radius * std::cos(angle)};
            rose.setPoint(i, point);
        }

        const float time = clock.getElapsedTime().asSeconds();

        position.x = mradius * std::cos((2 * M_PI * time) / period);
        position.y = mradius * std::sin((2 * M_PI * time) / period);

        rose.setPosition(position + center);

        window.clear();
        window.draw(rose);
        window.display();
    }
}