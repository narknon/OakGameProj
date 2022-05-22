#pragma once
#include "CoreMinimal.h"
#include "UsabilityInfo.generated.h"

class UUsableTypeDefinition;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUsabilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCanUse;
    
    UPROPERTY()
    bool bCanInteractWith;
    
    UPROPERTY()
    bool bCanPrimaryUse;
    
    UPROPERTY()
    bool bCanPrimaryHoldUse;
    
    UPROPERTY()
    bool bCanSecondaryUse;
    
    UPROPERTY()
    bool bCanSecondaryHoldUse;
    
    UPROPERTY()
    bool bCanShowUseDef;
    
    UPROPERTY(EditAnywhere)
    FText OptionalErrorText;
    
    UPROPERTY()
    UUsableTypeDefinition* PrimaryUseDef;
    
    UPROPERTY()
    UUsableTypeDefinition* PrimaryHoldUseDef;
    
    UPROPERTY()
    UUsableTypeDefinition* SecondaryUseDef;
    
    UPROPERTY()
    UUsableTypeDefinition* SecondaryHoldUseDef;
    
    FUsabilityInfo();
};

