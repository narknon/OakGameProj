#pragma once
#include "CoreMinimal.h"
#include "CustomizationAssetLoadedDelegate.generated.h"

class UGbxCustomizationData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FCustomizationAssetLoaded, UGbxCustomizationData*, LoadedCustomization);

