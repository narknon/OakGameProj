#pragma once
#include "CoreMinimal.h"
#include "EGbxMenuInputDevice.h"
#include "MenuInputChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuInputChanged, EGbxMenuInputDevice, NewInputDevice);

