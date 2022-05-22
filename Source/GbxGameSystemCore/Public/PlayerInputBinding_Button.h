#pragma once
#include "CoreMinimal.h"
#include "PlayerInputBinding_Button.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPlayerInputBinding_Button {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString RebindDataPath;
    
    UPROPERTY()
    TArray<FName> KeyNames;
    
    FPlayerInputBinding_Button();
};

