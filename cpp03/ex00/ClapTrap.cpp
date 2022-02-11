#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
}




ClapTrap::~ClapTrap()
{
}



ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

