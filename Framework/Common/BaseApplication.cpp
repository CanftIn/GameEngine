#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int CFT::BaseApplication::Initialize()
{
	m_bQuit = false;

	return 0;
}


// Finalize all sub modules and clean up all runtime temporary files.
void CFT::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void CFT::BaseApplication::Tick()
{
}

bool CFT::BaseApplication::IsQuit()
{
	return m_bQuit;
}