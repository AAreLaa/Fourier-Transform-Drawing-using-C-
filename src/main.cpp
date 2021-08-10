#include "Draw.hpp"
using namespace std;
int main()
{
    string fileName = "1.csv";
    Draw d;
    sf::RenderWindow window{ sf::VideoMode(1248,701), "***LASAKUSA***" ,sf::Style::Close};
    sf::Texture t;
    t.loadFromFile("img/Background.jpg");
    sf::Sprite s(t);
    while (window.isOpen())
    {
        sf::Event windowEvent;
        while (window.pollEvent(windowEvent))
        {
            if (windowEvent.type == sf::Event::KeyPressed)
                if (windowEvent.key.code == sf::Keyboard::Key::D)
                     {
                        window.close();
                        d.initCanvasMethod();
                        d.initFourierDrawingWindow();
                        d.FourierDrawing();
                     }
            if (windowEvent.type == sf::Event::KeyPressed)
                if (windowEvent.key.code == sf::Keyboard::Key::I)
                     {
                        window.close();
                        d.initImageMethod(fileName);
                        d.initFourierDrawingWindow();
                        d.FourierDrawing();
                        
                     }
            if (windowEvent.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        window.draw(s);
        window.display();
    }
    return 0;
}