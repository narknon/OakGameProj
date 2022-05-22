#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakChallenge.h"
#include "OakKillBasedChallenge.generated.h"

class UWeaponTypeData;
class UManufacturerData;
class UGrenadeBehavior_Payload;

UCLASS(EditInlineNew)
class OAKGAME_API UOakKillBasedChallenge : public UOakChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWeaponTypeData* RequiredWeaponType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UManufacturerData* RequiredManufacturer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireHostile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireCrit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireZoom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireNoZoom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireCloseRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CloseRangeMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireLongRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LongRangeMinDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireCrouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireUnaware;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireMovingFullSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireSliding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireDirectHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireIndirectHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireOneShotHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireOneShotShield;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireWeaponKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireGrenadeKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGrenadeBehavior_Payload> RequiredGrenadePayloadType;
    
    UOakKillBasedChallenge();
};

