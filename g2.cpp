#include <SFML/Graphics.hpp>
#include<iostream.h>

class A {
public:
    void Aa() {
        sf::RenderWindow window(sf::VideoMode(500, 500), "SFML Window");
        
        sf::Vertex line[] = {
            sf::Vertex(sf::Vector2f(140, 140)),
            sf::Vertex(sf::Vector2f(350, 140))
        };

        window.draw(line, 2, sf::Lines);

        sf::RectangleShape rectangle(sf::Vector2f(160, 160));
        rectangle.setFillColor(sf::Color::Blue);
        rectangle.setPosition(140, 140);
        window.draw(rectangle);

        sf::Vertex triangle[] = {
            sf::Vertex(sf::Vector2f(140, 140)),
            sf::Vertex(sf::Vector2f(200, 200)),
            sf::Vertex(sf::Vector2f(350, 140))
        };

        window.draw(triangle, 3, sf::Lines);

        window.display();

        sf::Event event;
        while (window.isOpen()) {
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
        }
    }
};

int main() {
    A o;
    o.Aa();
    return 0;
}

