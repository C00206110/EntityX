#include "HudSystem.h"
#include "Path.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>

void Hudsystem::initialise()
{
	if (!font.loadFromFile("akashi.ttf"))
	{
		std::string s("Error loading sausage");
		throw std::exception(s.c_str());
	}

	
	text.setFont(font);
	text.setCharacterSize(24);
	text.setColor(sf::Color(100, 0, 0, 100));
	text.setPosition(50, 400);



}


void Hudsystem::update()
{

	

	
		text.setString("Timer ");
		
	

}