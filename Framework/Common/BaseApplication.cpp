#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int CAN::BaseApplication::Initialize()
{
	m_bQuit = false;

	return 0;
}


// Finalize all sub modules and clean up all runtime temporary files.
void CAN::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void CAN::BaseApplication::Tick()
{
}

bool CAN::BaseApplication::IsQuit()
{
	return m_bQuit;
}