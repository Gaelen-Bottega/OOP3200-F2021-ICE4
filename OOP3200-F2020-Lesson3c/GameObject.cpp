#include "GameObject.h"

/// <summary>
/// Default constructor 
/// </summary>
GameObject::GameObject() : m_id(0), m_position(Vector2D())
{
}

/// <summary>
/// Parameterized constructor
/// </summary>
/// <param name="id"></param>
/// <param name="x"></param>
/// <param name="y"></param>
GameObject::GameObject(const int id, const float x, const float y)
{
	SetID(id);
	SetPosition(x, y);
}

/// <summary>
/// Vector position constructor
/// </summary>
/// <param name="id"></param>
/// <param name="position"></param>
GameObject::GameObject(const int id, const Vector2D& position)
{
	SetID(id);
	SetPosition(position);
}

/// <summary>
/// Deconstructor
/// </summary>
GameObject::~GameObject()
= default;

/// <summary>
/// copy constructor
/// </summary>
/// <param name="other_object"></param>
GameObject::GameObject(const GameObject & other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position);
}

/// <summary>
/// Overload of operator =
/// </summary>
/// <param name="other_object"></param>
/// <returns></returns>
GameObject& GameObject::operator=(const GameObject & other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position);
	return (*this);
}

/// <summary>
/// Get the position
/// </summary>
/// <returns></returns>
Vector2D GameObject::GetPosition() const
{
	return m_position;
}

/// <summary>
/// GetId
/// </summary>
/// <returns></returns>
int GameObject::GetID() const
{
	return m_id;
}

/// <summary>
/// Set ID
/// </summary>
/// <param name="id"></param>
void GameObject::SetID(const int id)
{
	m_id = id;
}

/// <summary>
/// Set the position 
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
void GameObject::SetPosition(const float x, const float y)
{
	m_position.Set(x, y);
}

/// <summary>
/// Set Position
/// </summary>
/// <param name="new_position"></param>
void GameObject::SetPosition(const Vector2D & new_position)
{
	m_position = new_position;
}

/// <summary>
/// ToString method for game object
/// </summary>
/// <returns></returns>
std::string GameObject::ToString() const
{
	std::string output_string;
	output_string += "ID       : " + std::to_string(GetID()) + "\n";
	output_string += "Position : " + GetPosition().ToString() + "\n";
	return output_string;
}