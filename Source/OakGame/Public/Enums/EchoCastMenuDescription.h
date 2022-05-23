#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EchoCastMenuDescription.generated.h"

class UEchoCastMenuDescriptionItem;

UCLASS()
class UEchoCastMenuDescription : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UEchoCastMenuDescriptionItem*> Items;
    
    UEchoCastMenuDescription();
};

