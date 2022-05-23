#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxSkillBar.generated.h"

class UGbxGFxProgressBar;
class UOakActionAbility;

UCLASS(NonTransient)
class UGFxSkillBar : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* Wrapper;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxProgressBar*> SkillDurationBars;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChargeIconWrapper;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> ChargesRemainingIcons;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SecondaryFill;
    
    UPROPERTY(Transient)
    UOakActionAbility* CachedAbility;
    
    UGFxSkillBar();
};

