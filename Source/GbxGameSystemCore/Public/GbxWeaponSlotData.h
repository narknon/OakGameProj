#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GbxWeaponSlotData.generated.h"

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UGbxWeaponSlotData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool InitiallyEnabled;
    
    UGbxWeaponSlotData();
};

