#pragma once
#include "CoreMinimal.h"
#include "AnimStateGroup.generated.h"

USTRUCT(BlueprintType)
struct FAnimStateGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName GroupName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> States;
    
    GBXGAMESYSTEMCORE_API FAnimStateGroup();
};

