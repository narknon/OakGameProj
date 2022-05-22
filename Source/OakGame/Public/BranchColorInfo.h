#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BranchColorInfo.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FBranchColorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString FrameColorName;
    
    UPROPERTY(EditAnywhere)
    FLinearColor FrameColorHeader;
    
    UPROPERTY(EditAnywhere)
    FLinearColor FrameColorBackground;
    
    UPROPERTY(EditAnywhere)
    FLinearColor IconColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor IconBackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FString IllustrationName;
    
    FBranchColorInfo();
};

