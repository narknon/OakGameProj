#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StanceDataProvider.h"
#include "StanceFloatValue.h"
#include "StanceData.generated.h"

class UHitReactionLayer;
class UStanceData;
class UPhysicalAnimationProfileAsset;
class UHitReactionData;

UCLASS(Abstract, BlueprintType)
class GBXGAMESYSTEMCORE_API UStanceData : public UStanceDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStanceFloatValue MaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStanceFloatValue MaxRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStanceFloatValue MaxAllowedAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseMaxAllowedAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStanceFloatValue AimRotationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAimRotationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStanceFloatValue MaxIdleRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseMaxIdleRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStanceData* StanceDataToShowAnimSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideSlowdownSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStanceFloatValue SlowdownSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideMaxAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAcceleration;
    
private:
    UPROPERTY(EditAnywhere)
    bool bLockDodging;
    
    UPROPERTY(EditAnywhere)
    bool bLockTurns;
    
    UPROPERTY(EditAnywhere)
    bool bLockFootIK;
    
    UPROPERTY(EditAnywhere)
    bool bLockHandIK;
    
    UPROPERTY(EditAnywhere)
    bool bThisStanceAllowsFidgetAnims;
    
    UPROPERTY(EditAnywhere)
    float WaitTimeBeforeFirstFidgetAnim;
    
    UPROPERTY(EditAnywhere)
    UPhysicalAnimationProfileAsset* PhysicalAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitReactionLayer> HitReactionLayer;
    
    UPROPERTY(EditAnywhere)
    UHitReactionData* HitReactionData;
    
public:
    UStanceData();
};

