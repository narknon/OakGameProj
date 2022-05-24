#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EWeaponEffectType.h"
#include "EWeaponAttachmentVisibilityType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WeaponRegisterAttachmentEffectData.generated.h"

class UParticleSystem;
class UEffectCollectionData;

USTRUCT(BlueprintType)
struct FWeaponRegisterAttachmentEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponEffectType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UEffectCollectionData> ConditionalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ScopedSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponAttachmentVisibilityType> Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UseModeBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AutoActivateModeBitmask;
    
    UPROPERTY()
    uint8 bPlayOnlyOnActiveSlot: 1;
    
    UPROPERTY()
    uint8 bAutoActivate: 1;
    
    UPROPERTY()
    uint8 bIgnoredByFXCoordinator: 1;
    
    UPROPERTY()
    uint8 bHideWhenScoped: 1;
    
    GBXWEAPON_API FWeaponRegisterAttachmentEffectData();
};

