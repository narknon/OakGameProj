#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "SupportedElementalInteractionData.h"
#include "EElementalInteractionMode.h"
#include "ElementalInteractionConfigurationData.generated.h"

class UElementalInteractionData;

UCLASS(BlueprintType)
class OAKGAME_API UElementalInteractionConfigurationData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EElementalInteractionMode InteractionMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIgnoreDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UElementalInteractionData* NaturalState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSupportedElementalInteractionData> SupportedStates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UElementalInteractionData* InitialState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsInitiallySource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialSourceDuration;
    
public:
    UElementalInteractionConfigurationData();
};

