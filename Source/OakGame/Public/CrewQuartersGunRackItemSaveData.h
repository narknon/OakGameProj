#pragma once
#include "CoreMinimal.h"
#include "InventoryBalanceStateInitializationData.h"
#include "CrewQuartersGunRackItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCrewQuartersGunRackItemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<uint8> EncryptedSerialNumber;
    
    UPROPERTY(VisibleAnywhere)
    FInventoryBalanceStateInitializationData DevelopmentSaveData;
    
private:
    UPROPERTY(VisibleAnywhere)
    FString SlotAssetPath;
    
public:
    OAKGAME_API FCrewQuartersGunRackItemSaveData();
};

