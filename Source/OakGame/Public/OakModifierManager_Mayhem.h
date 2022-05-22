#pragma once
#include "CoreMinimal.h"
#include "OakModifierManager.h"
#include "MayhemModifierSet.h"
#include "OakModifierManager_Mayhem.generated.h"

UCLASS()
class UOakModifierManager_Mayhem : public UOakModifierManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FMayhemModifierSet> ActiveModifierSets;
    
public:
    UOakModifierManager_Mayhem();
};

