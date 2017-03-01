#include <cstdint>
#include <unordered_map>
#include <utility>
#include <cassert>
#include "entityx/config.h"
#include "entityx/Entity.h"
#include "entityx/Event.h"
#include "entityx/help/NonCopyable.h"
#include <SFML/Graphics.hpp>


class Hudsystem
{
public:


	sf::Font font;
	sf::Text text;

	void initialise();
	void update();



	


private:
};
