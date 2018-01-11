#include <SFML\Graphics.hpp>
#include <SFMl\Window.hpp>
#include <SFML\System.hpp>

void redrawFrame(sf::RenderWindow &window, sf::ConvexShape &cursor)
{
    window.clear(sf::Color(255, 255, 255));
    window.draw(cursor);
    window.display();
}

void initCursor(sf::ConvexShape &cursor)
{

    cursor.setFillColor(sf::Color{255, 255, 0});
    cursor.setPointCount(7);
    cursor.setPoint(0, {400, 250});
    cursor.setPoint(1, {350, 300});
    cursor.setPoint(2, {375, 300});
    cursor.setPoint(3, {375, 350});
    cursor.setPoint(4, {425, 350});
    cursor.setPoint(5, {425, 300});
    cursor.setPoint(6, {450, 300});
    cursor.setOutlineColor(sf::Color::Black);
    cursor.setOutlineThickness(2);
}
int main()
{

    constexpr unsigned antialiasinLevel = 8;

    sf::ContextSettings settings;
    settings.antialiasingLevel = antialiasinLevel;
    sf::RenderWindow window(sf::VideoMode({800, 600}), "no name", sf::Style::Default, settings);
    sf::ConvexShape cursor;
    initCursor(cursor);

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

        redrawFrame(window, cursor);
    }
}