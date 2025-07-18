#include "maxDS.h"

maxDS::maxDS()
{
	CtrlLayout(*this, "maxDS");
	Sizeable().MinimizeBox().MaximizeBox();
}

GUI_APP_MAIN
{
	maxDS().Run();
}
