#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakCharacterCustomization.h"
#include "OakCharacterColorization.generated.h"

USTRUCT(BlueprintType)
struct FOakCharacterColorization : public FOakCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor Primary1;
    
    UPROPERTY(EditAnywhere)
    bool bOverridePrimary1;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Primary2;
    
    UPROPERTY(EditAnywhere)
    bool bOverridePrimary2;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Secondary1;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSecondary1;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Secondary2;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSecondary2;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Tertiary1;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTertiary1;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Tertiary2;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTertiary2;
    
    OAKGAME_API FOakCharacterColorization();
};

