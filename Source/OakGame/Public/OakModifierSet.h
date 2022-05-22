#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OakModifierSet.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakModifierSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDisplay;
    
    UPROPERTY(EditAnywhere)
    FName ModifierName;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText DisplayDesc;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataTableRowHandle> Modifiers;
    
    FOakModifierSet();
};

