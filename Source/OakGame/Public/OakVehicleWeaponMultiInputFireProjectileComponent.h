#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakVehicleWeaponFireProjectileComponent.h"
#include "OakVehicleWeaponMultiInputFireProjectileComponent.generated.h"

class AActor;
class ULightProjectileData;
class UFiringPattern;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakVehicleWeaponMultiInputFireProjectileComponent : public UOakVehicleWeaponFireProjectileComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> AltProjectileTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULightProjectileData> AltLightProjectileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFiringPattern* AltFiringPatternData;
    
    UOakVehicleWeaponMultiInputFireProjectileComponent();
};

