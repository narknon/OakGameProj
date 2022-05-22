#pragma once
#include "CoreMinimal.h"
#include "HitRegionComponent.h"
#include "UObject/NoExportTypes.h"
#include "OakHitRegionComponent.generated.h"

class UGoreAoEDamageData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakHitRegionComponent : public UHitRegionComponent {
    GENERATED_BODY()
public:
    UOakHitRegionComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerAoEGore(UGoreAoEDamageData* GoreData, FVector Origin, float Radius);
    
};

