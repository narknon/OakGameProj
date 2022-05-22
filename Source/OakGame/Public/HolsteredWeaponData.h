#pragma once
#include "CoreMinimal.h"
#include "EWeaponHolsteredSizeType.h"
#include "EPickupLootAttachmentMode.h"
#include "HolsteredWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FHolsteredWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWeaponHolsteredSizeType WeaponSizeType;
    
    UPROPERTY(EditAnywhere)
    EPickupLootAttachmentMode AttachMode;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool bVisibleInFirstPerson;
    
    OAKGAME_API FHolsteredWeaponData();
};

