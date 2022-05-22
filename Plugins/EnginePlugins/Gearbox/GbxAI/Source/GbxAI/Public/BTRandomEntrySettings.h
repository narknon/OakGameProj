#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "BTRandomEntrySettings.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FBTRandomEntrySettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Weight;
    
    UPROPERTY(EditAnywhere)
    FGbxParam LoopCountMax;
    
    UPROPERTY(EditAnywhere)
    bool bUseLoopCountMax;
    
    FBTRandomEntrySettings();
};

