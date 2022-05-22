#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakCharacterCustomization.h"
#include "OakCharacterSkinTone.generated.h"

USTRUCT(BlueprintType)
struct FOakCharacterSkinTone : public FOakCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor SkinTone;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSkinTone;
    
    OAKGAME_API FOakCharacterSkinTone();
};

