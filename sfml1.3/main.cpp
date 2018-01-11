#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;

int main()
{

    RenderWindow window(VideoMode({800, 700}), "Home");

    RectangleShape wall;
    wall.setSize({450, 220});
    wall.setPosition({150, 460});
    wall.setFillColor(Color(77, 46, 11));

    RectangleShape door;
    door.setSize({70, 170});
    door.setPosition({245, 510});
    door.setFillColor(Color(24, 23, 23));

    ConvexShape convex;
    convex.setFillColor(Color(93, 30, 23));
    convex.setPointCount(4);
    convex.setPoint(0, Vector2f(210, 350));
    convex.setPoint(1, Vector2f(540, 350));
    convex.setPoint(2, Vector2f(640, 460));
    convex.setPoint(3, Vector2f(110, 460));

    CircleShape smoke1(12);
    smoke1.setPosition({435, 270});
    smoke1.setFillColor(Color(191, 191, 191));

    CircleShape smoke2(16);
    smoke2.setPosition({440, 247});
    smoke2.setFillColor(Color(191, 191, 191));

    CircleShape smoke3(18);
    smoke3.setPosition({440, 230});
    smoke3.setFillColor(Color(191, 191, 191));

    CircleShape smoke4(22);
    smoke4.setPosition({452, 205});
    smoke4.setFillColor(Color(191, 191, 191));

    RectangleShape flue;
    flue.setSize({30, 60});
    flue.setPosition({430, 330});
    flue.setFillColor(Color(59, 56, 56));

    RectangleShape flue2;
    flue2.setSize({60, 40});
    flue2.setPosition({415, 290});
    flue2.setFillColor(Color(59, 56, 56));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.draw(wall);
        window.draw(door);
        window.draw(convex);
        window.draw(smoke1);
        window.draw(smoke2);
        window.draw(smoke3);
        window.draw(smoke4);
        window.draw(flue);
        window.draw(flue2);
        window.display();
    }
}