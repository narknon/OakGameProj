#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BodyWeaponHoldManagerComponent.generated.h"

class UBodyWeaponHoldData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UBodyWeaponHoldManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UBodyWeaponHoldData* DefaultWeaponHold;
    
    UPROPERTY(EditAnywhere)
    TArray<UBodyWeaponHoldData*> WeaponHolds;
    
    UPROPERTY(EditAnywhere)
    FName UnarmedHoldName;
    
public:
    UBodyWeaponHoldManagerComponent();
};

