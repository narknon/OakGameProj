#pragma once
#include "CoreMinimal.h"
#include "ZoneMapPOIComponent.h"
#include "ZoneMapPOIAIComponent.generated.h"

class UTeamComponent;
class UZoneMapPOITypeData;
class UTeam;

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UZoneMapPOIAIComponent : public UZoneMapPOIComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UZoneMapPOITypeData* FriendlyPOIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UZoneMapPOITypeData* EnemyPOIType;
    
    UZoneMapPOIAIComponent();
    UFUNCTION()
    void OnTeamChanged(UTeamComponent* TeamComponent, UTeam* PrevTeam);
    
private:
    UFUNCTION()
    void DelayedTeamChanged();
    
    UFUNCTION()
    void DelayedRemovePOI();
    
};

