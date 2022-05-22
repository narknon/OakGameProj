#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerInputBinding_Axis_Key.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPlayerInputBinding_Axis_Key {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName KeyName;
    
    UPROPERTY()
    FVector Scale3D;
    
    FPlayerInputBinding_Axis_Key();
};

