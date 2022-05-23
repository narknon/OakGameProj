#pragma once
#include "CoreMinimal.h"
#include "ESkillItemDisplayType.h"
#include "GFxSkillScreenSkillInfo.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxSkillScreenSkillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESkillItemDisplayType ItemType;
    
    UPROPERTY(EditAnywhere)
    FText ItemName;
    
    UPROPERTY(EditAnywhere)
    FText ItemDescription;
    
    FGFxSkillScreenSkillInfo();
};

