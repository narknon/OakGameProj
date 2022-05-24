#pragma once
#include "CoreMinimal.h"
#include "OakZoneMapIcon_POI.h"
#include "ZoneMapTravelStationIcon_POI.generated.h"

class UTravelStationComponentBase;

UCLASS()
class OAKGAME_API AZoneMapTravelStationIcon_POI : public AOakZoneMapIcon_POI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnfogRadius;
    
    UPROPERTY(EditAnywhere)
    FText MapUnavailableMessage;
    
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UTravelStationComponentBase> AssociatedTravelComponent;
    
public:
    AZoneMapTravelStationIcon_POI();
private:
    UFUNCTION()
    void OnTravelIDsChanged();
    
    UFUNCTION()
    void OnFastTravelStationDiscovered(bool bNoActivationSequence);
    
};

