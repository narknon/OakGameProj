#pragma once
#include "CoreMinimal.h"
#include "PhotoModeOption.h"
#include "PhotoModeOptionSet.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeOptionSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString OptionSetName;
    
    UPROPERTY(EditAnywhere)
    TArray<FPhotoModeOption> Options;
    
    OAKGAME_API FPhotoModeOptionSet();
};

