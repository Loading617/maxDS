#ifndef _maxDS_maxDS_h
#define _maxDS_maxDS_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <maxDS/maxDS.lay>
#include <CtrlCore/lay.h>

class maxDS : public WithmaxDSLayout<TopWindow> {
public:
	maxDS();
};

#endif
