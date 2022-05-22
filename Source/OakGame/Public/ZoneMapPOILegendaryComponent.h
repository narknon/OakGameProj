#pragma once
#include "CoreMinimal.h"
#include "ZoneMapPOIComponent.h"
#include "ZoneMapPOILegendaryComponent.generated.h"

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UZoneMapPOILegendaryComponent : public UZoneMapPOIComponent {
    GENERATED_BODY()
public:
    UZoneMapPOILegendaryComponent();
private:
    UFUNCTION()
    void OnShowLegendariesChanged(bool bNewVal);
    
};

