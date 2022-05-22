#pragma once
#include "CoreMinimal.h"
#include "WeaponZoomComponent.h"
#include "WeaponSightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponSightComponent : public UWeaponZoomComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CustomColorSchemeIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateZoomTransitionParam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateColorScheme: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseGlobalZoomTransitionState: 1;
    
    UPROPERTY(EditAnywhere)
    int32 ZoomViewFlags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinTargetTime;
    
    UPROPERTY(EditAnywhere)
    float SpawnProjectileCloserToSightPercentZ;
    
    UPROPERTY(EditAnywhere)
    float SpawnProjectileCloserToSightPercentX;
    
    UPROPERTY(EditAnywhere)
    float MaxAccuracyModifierPct;
    
    UPROPERTY(EditAnywhere)
    float MaxAccuracyModifierTime;
    
public:
    UWeaponSightComponent();
};

