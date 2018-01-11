#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode({200, 600}), "Rectangles and circle");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({180, 580});
    shape1.setRotation(0);
    shape1.setPosition({10, 10});
    shape1.setFillColor(sf::Color(105, 105, 105));
    window.draw(shape1);

    sf::CircleShape shape2(70);
    shape2.setPosition({30, 40});
    shape2.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape2);

    sf::CircleShape shape3(70);
    shape3.setPosition({30, 220});
    shape3.setFillColor(sf::Color(255, 255, 0));
    window.draw(shape3);

    sf::CircleShape shape4(70);
    shape4.setPosition({30, 400});
    shape4.setFillColor(sf::Color(0, 255, 0));
    window.draw(shape4);
    window.display();

    sf::sleep(sf::seconds(5));
}