#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomPlayerColorSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FCustomPlayerColorSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ColorParameter;
    
    UPROPERTY(EditAnywhere)
    FVector AppliedColor;
    
    UPROPERTY(EditAnywhere)
    FVector SplitColor;
    
    UPROPERTY(EditAnywhere)
    bool bUseDefaultColor;
    
    UPROPERTY(EditAnywhere)
    bool bUseDefaultSplitColor;
    
    OAKGAME_API FCustomPlayerColorSaveGameData();
};

