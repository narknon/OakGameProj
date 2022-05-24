#pragma once
#include "CoreMinimal.h"
#include "GFxSkillScreenBranchContainer.generated.h"

class UGFxSkillScreenBranch;
class UGbxGFxObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxSkillScreenBranchContainer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* Root;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BranchObject;
    
    UPROPERTY(Transient)
    UGFxSkillScreenBranch* Branch;
    
    UPROPERTY(Transient)
    UGFxSkillScreenBranch* OriginalBranch;
    
    FGFxSkillScreenBranchContainer();
};

