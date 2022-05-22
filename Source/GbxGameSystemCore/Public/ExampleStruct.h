#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ExampleStruct.generated.h"

USTRUCT()
struct FExampleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionKey;
    
    GBXGAMESYSTEMCORE_API FExampleStruct();
};

