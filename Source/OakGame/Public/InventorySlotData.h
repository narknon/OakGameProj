#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "InventorySlotData.generated.h"

class UInventoryCategoryData;

UCLASS()
class OAKGAME_API UInventorySlotData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool bShowHolsteredOnBody;
    
    UPROPERTY(EditAnywhere)
    bool InitiallyEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    FText DisplayDescription;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* InventoryCategory;
    
    UInventorySlotData();
};

