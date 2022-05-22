#pragma once
#include "CoreMinimal.h"
#include "UserStateSetRuntimeData.h"
#include "UserStatesRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUserStatesRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUserStateSetRuntimeData> States;
    
    FUserStatesRuntimeData();
};

