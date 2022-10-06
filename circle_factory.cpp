#include "circle_factory.h"

Figure* CircleFactory::GetFigure()
{
    return _circle_decorator;
}

CircleFactory::CircleFactory(Vector2f origin, int radius, Color color)
{
	auto circle = new CircleDecorator(new CircleShape());
	circle->SetPosition(Vector2f(origin.x, origin.y));
	circle->SetRadius(radius);
	circle->SetFillColor(Color(0, 0, 255, 100));

	this->_circle_decorator = circle;

}