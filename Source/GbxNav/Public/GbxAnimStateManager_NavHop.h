#pragma once
#include "CoreMinimal.h"
#include "GbxAnimStateManager_RootMotion.h"
#include "GbxAnimStateManager_NavHop.generated.h"

UCLASS(CollapseCategories, Deprecated, EditInlineNew, NotPlaceable)
class GBXNAV_API UDEPRECATED_GbxAnimStateManager_NavHop : public UGbxAnimStateManager_RootMotion {
    GENERATED_BODY()
public:
    UDEPRECATED_GbxAnimStateManager_NavHop();
};

