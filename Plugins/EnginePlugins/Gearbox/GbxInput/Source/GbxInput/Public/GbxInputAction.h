#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxInputAction.generated.h"

UCLASS(Abstract, Deprecated, EditInlineNew, NotPlaceable)
class GBXINPUT_API UDEPRECATED_GbxInputAction : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UDEPRECATED_GbxInputAction();
};

