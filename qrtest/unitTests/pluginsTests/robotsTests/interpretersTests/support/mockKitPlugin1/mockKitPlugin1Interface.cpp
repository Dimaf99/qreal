#include "mockKitPlugin1Interface.h"

using namespace qrTest::mockKitPlugin1;

QString MockKitPlugin1Interface::kitId() const
{
	return "MockKitPlugin1";
}

QString MockKitPlugin1Interface::friendlyKitName() const
{
	return "Mock Kit Plugin 1";
}

QList<interpreterBase::robotModel::RobotModelInterface *> MockKitPlugin1Interface::robotModels()
{
	return QList<interpreterBase::robotModel::RobotModelInterface *>() << &mRobotModel;
}

QWidget *MockKitPlugin1Interface::settingsWidget() const
{
	return nullptr;
}

qReal::IdList MockKitPlugin1Interface::unsupportedBlocks() const
{
	return {};
}
