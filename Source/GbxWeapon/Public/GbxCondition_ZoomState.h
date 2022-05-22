#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_ZoomState.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXWEAPON_API UGbxCondition_ZoomState : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsZoomedIn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIncludeTransitions: 1;
    
    UGbxCondition_ZoomState();
};

