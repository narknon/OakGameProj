#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxSkillScreenDragObject.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxSkillScreenDragObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* SkillIconArt;
    
    UGFxSkillScreenDragObject();
};

