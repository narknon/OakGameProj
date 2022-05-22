#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CustomizationLinkedParameter.h"
#include "BodyMeshLinkedParameters.generated.h"

class AOakCharacter;

USTRUCT(BlueprintType)
struct FBodyMeshLinkedParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AOakCharacter>> OwnerClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomizationLinkedParameter> LinkedParameters;
    
    OAKGAME_API FBodyMeshLinkedParameters();
};

