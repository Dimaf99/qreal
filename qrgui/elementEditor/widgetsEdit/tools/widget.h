#pragma once

#include <QtGui/QWidget>

#include "layoutTool.h"

namespace qReal
{
namespace widgetsEdit
{

int const WIDGET_DEFAULT_WIDTH = 150;
int const WIDGET_DEFAULT_HEIGHT = 150;
int const WIDGET_DEFAULT_MIN_WIDTH = 20;
int const WIDGET_DEFAULT_MIN_HEIGHT = 20;

class Widget : public LayoutTool
{
public:
	Widget(ToolController *controller);

private:
	QWidget *mWidget;
};

}
}
