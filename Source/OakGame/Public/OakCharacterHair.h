#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakCharacterCustomization.h"
#include "OakCharacterHair.generated.h"

USTRUCT(BlueprintType)
struct FOakCharacterHair : public FOakCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor InnerColor;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideInnerColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor OuterColor;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideOuterColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SSSColor;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSSSColor;
    
    OAKGAME_API FOakCharacterHair();
};

