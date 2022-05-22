#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponTrinketAttachment.generated.h"

class UGbxSkeletalMeshComponent;
class USkeletalMesh;
class UAnimInstance;

USTRUCT(BlueprintType)
struct FWeaponTrinketAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGbxSkeletalMeshComponent* MeshComponent;
    
    UPROPERTY()
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY()
    TSubclassOf<UAnimInstance> AnimInstanceClass;
    
    GBXWEAPON_API FWeaponTrinketAttachment();
};

