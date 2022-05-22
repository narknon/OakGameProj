#pragma once
#include "CoreMinimal.h"
#include "OakModifierSet.h"
#include "OakModifierSetWithMutexTags.generated.h"

USTRUCT()
struct OAKGAME_API FOakModifierSetWithMutexTags {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOakModifierSet ModifierSet;
    
    UPROPERTY()
    TArray<FName> MutexTags;
    
    FOakModifierSetWithMutexTags();
};

