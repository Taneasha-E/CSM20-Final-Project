#pragma once

#include "Asset.h"

// NOTE: This abstract class has no function definitions, so it has no .cpp file
class Item : public Asset {
public:
	string GetAssetType();
};