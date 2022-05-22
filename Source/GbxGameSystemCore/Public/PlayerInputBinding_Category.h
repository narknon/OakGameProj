#pragma once
#include "CoreMinimal.h"
#include "PlayerInputBinding_Button.h"
#include "PlayerInputBinding_Axis.h"
#include "PlayerInputBinding_Category.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPlayerInputBinding_Category {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CategoryDataPath;
    
    UPROPERTY()
    FString ContextDataPath;
    
    UPROPERTY()
    TArray<FPlayerInputBinding_Button> ButtonBindings;
    
    UPROPERTY()
    TArray<FPlayerInputBinding_Axis> AxisBindings;
    
    FPlayerInputBinding_Category();
};

