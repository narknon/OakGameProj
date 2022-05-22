#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "OakModifierStatusEffectData.generated.h"

class UGbxAttributeData;

USTRUCT()
struct FOakModifierStatusEffectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* AttributeData;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MinValue;
    
    OAKGAME_API FOakModifierStatusEffectData();
};

