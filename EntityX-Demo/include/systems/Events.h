#pragma once
#include "entityx/Event.h"
#include "entityx/Entity.h"
#include "utils/LevelLoader.h"
#include <SFML\Window\/Keyboard.hpp>

/// <summary>
/// The start game event.
/// </summary>
struct EvStartGame : public entityx::Event<EvStartGame>
{
	EvStartGame() {}
};


/// <summary>
/// The game initialise event.
/// </summary>
struct EvInit : public entityx::Event<EvInit>
{
	/// <summary>
	/// Constructs this event with the specified fade parameter.
	/// </summary>
	/// <param name="levelNr">the game level number</param>
	/// <param name="level">all the required data for this level</param>
	/// </summary>
	EvInit(int levelNr, LevelData const& level)
		: m_levelNr(levelNr)
		, m_level(level)
	{
	}

	int m_levelNr;
	LevelData const& m_level;
};

struct  EvKeyboard : public entityx::Event<EvKeyboard>
{
	 /// <summary>
	 /// constructs this event with the key and key pressed status parameters
	 /// </summary>
	 /// 
	EvKeyboard(sf::Keyboard::Key key, bool isdown)
		: m_key(key)
		, m_isDown(isdown)
	{

	 }
	sf::Keyboard::Key m_key;
	bool m_isDown;
};

/// <summary>
/// An event used to determine the playerId.
/// </summary>
struct EvReportPlayerId : public entityx::Event<EvReportPlayerId>
{
	EvReportPlayerId(entityx::Entity::Id playerId)
		: m_playerId(playerId)
	{
	}

	entityx::Entity::Id m_playerId;
};

