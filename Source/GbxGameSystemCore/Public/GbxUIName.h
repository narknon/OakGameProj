#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxUIFormattableParameter.h"
#include "GbxUIName.generated.h"

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxUIName : public UGbxDataAsset, public IGbxUIFormattableParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UGbxUIName();
    UFUNCTION(BlueprintPure)
    FText GetFormattedText() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

