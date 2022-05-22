#pragma once
#include "CoreMinimal.h"
#include "EBaseQuickChangeMenuState.h"
#include "BaseQuickChangeMenuStateData.generated.h"

class UGbxCustomizationTypeData;

USTRUCT(BlueprintType)
struct OAKGAME_API FBaseQuickChangeMenuStateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText MenuStateName;
    
    UPROPERTY(EditAnywhere)
    FText MenuStateDescription;
    
    UPROPERTY(EditAnywhere)
    FString ContentFrameName;
    
    UPROPERTY(EditAnywhere)
    FString IconFrameName;
    
    UPROPERTY(EditAnywhere)
    FName StandInConfig;
    
    UPROPERTY(EditAnywhere)
    bool bForceProjectionFXOn;
    
    UPROPERTY(EditAnywhere)
    EBaseQuickChangeMenuState MenuState;
    
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTypeData* CustomizationType;
    
    FBaseQuickChangeMenuStateData();
};

