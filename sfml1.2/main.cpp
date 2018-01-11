#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
using namespace sf;
int main()
{
    sf::RenderWindow window(sf::VideoMode({600, 400}), "My name is");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({120, 20});
    shape1.setRotation(0);
    shape1.setPosition({10, 10});
    shape1.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({20, 50});
    shape2.setRotation(0);
    shape2.setPosition({130, 10});
    shape2.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({20, 180});
    shape3.setRotation(0);
    shape3.setPosition({10, 10});
    shape3.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({120, 20});
    shape4.setRotation(0);
    shape4.setPosition({10, 180});
    shape4.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({20, 180});
    shape5.setRotation(0);
    shape5.setPosition({120, 180});
    shape5.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({-130, 20});
    shape6.setRotation(0);
    shape6.setPosition({140, 360});
    shape6.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({370, 20});
    shape7.setRotation(-90);
    shape7.setPosition({160, 380});
    shape7.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({370, 20});
    shape8.setRotation(-90);
    shape8.setPosition({380, 380});
    shape8.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({20, 160});
    shape9.setRotation(45);
    shape9.setPosition({380, 10});
    shape9.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({20, 163});
    shape10.setRotation(-45);
    shape10.setPosition({164, 24});
    shape10.setFillColor(sf::Color(128, 0, 128));
    window.draw(shape10);

    sf::RectangleShape L_letter1;
    L_letter1.setSize({20, 370});
    L_letter1.setRotation(0);
    L_letter1.setPosition({420, 10});
    L_letter1.setFillColor(sf::Color(128, 0, 128));
    window.draw(L_letter1);

    sf::RectangleShape L_letter2;
    L_letter2.setSize({160, -20});
    L_letter2.setRotation(0);
    L_letter2.setPosition({420, 380});
    L_letter2.setFillColor(sf::Color(128, 0, 128));
    window.draw(L_letter2);
    window.display();

    sf::sleep(sf::seconds(5));
}