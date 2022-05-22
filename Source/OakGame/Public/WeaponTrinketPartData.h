#pragma once
#include "CoreMinimal.h"
#include "OakInventoryCustomizationPartData.h"
#include "WeaponTrinketPartData.generated.h"

class USkeletalMesh;
class UAnimInstance;

UCLASS()
class OAKGAME_API UWeaponTrinketPartData : public UOakInventoryCustomizationPartData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UAnimInstance> AnimInstanceClass;
    
    UPROPERTY(EditAnywhere)
    FName AttachSocket;
    
    UWeaponTrinketPartData();
};

