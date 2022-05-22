#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "ItemPoolPartSelectionPartTypeOverrideData.h"
#include "ItemPoolPartSelectionOverrideData.generated.h"

class UInventoryPartSetData;
class UEnum;
class UActorPartData;

UCLASS()
class GBXINVENTORY_API UItemPoolPartSelectionOverrideData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInventoryPartSetData> PartSetClass;
    
    UPROPERTY(VisibleAnywhere)
    UEnum* PartTypeEnum;
    
    UPROPERTY(EditAnywhere)
    TArray<FItemPoolPartSelectionPartTypeOverrideData> PartTypeOverrides;
    
public:
    UItemPoolPartSelectionOverrideData();
private:
    UFUNCTION()
    void EnumerateInventoryParts(uint8 PartType, TArray<UActorPartData*>& OutPartList);
    
};

