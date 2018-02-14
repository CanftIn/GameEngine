#include "../Framework/Common/BaseApplication.hpp"

namespace CAN {
	BaseApplication g_App;
	IApplication* g_pApp = &g_App;
}