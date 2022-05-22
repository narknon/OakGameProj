#pragma once
#include "CoreMinimal.h"
#include "PreAddToFullInventory_InternalDelegate.generated.h"

class UInventoryCategoryData;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPreAddToFullInventory_Internal, const UInventoryCategoryData*, Category, AActor*, NewActor, int32, Flags, int32, DesiredSlot);

