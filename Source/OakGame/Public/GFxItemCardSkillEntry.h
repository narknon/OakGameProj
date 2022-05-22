#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxItemCardSkillEntry.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxItemCardSkillEntry : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* SkillIconContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SkillIcon;
    
    UPROPERTY(Transient)
    FString IconKeyframe;
    
    UGFxItemCardSkillEntry();
};

