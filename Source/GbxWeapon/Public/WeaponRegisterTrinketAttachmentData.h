#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponAttachmentVisibilityType.h"
#include "WeaponRegisterTrinketAttachmentData.generated.h"

class USkeletalMesh;
class UAnimInstance;

USTRUCT(BlueprintType)
struct GBXWEAPON_API FWeaponRegisterTrinketAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponAttachmentVisibilityType> Visibility;
    
    FWeaponRegisterTrinketAttachmentData();
};

