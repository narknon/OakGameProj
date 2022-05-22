#pragma once
#include "CoreMinimal.h"
#include "PlayerInputBinding_Axis_Key.h"
#include "PlayerInputBinding_Axis.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPlayerInputBinding_Axis {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString RebindDataPath;
    
    UPROPERTY()
    TArray<FPlayerInputBinding_Axis_Key> Keys;
    
    FPlayerInputBinding_Axis();
};

