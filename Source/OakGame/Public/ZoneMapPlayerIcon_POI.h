#pragma once
#include "CoreMinimal.h"
#include "OakZoneMapIcon_POI.h"
#include "ZoneMapPlayerIcon_POI.generated.h"

class UPawnAttachSlotComponent;

UCLASS()
class OAKGAME_API AZoneMapPlayerIcon_POI : public AOakZoneMapIcon_POI {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaterialXAxisParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialYAxisParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialZAxisParameter;
    
    UPROPERTY(EditAnywhere)
    FName PlayerPulseMaterialParameter;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateWPOMaterialForVehicleInZoneMapView;
    
    AZoneMapPlayerIcon_POI();
    UFUNCTION()
    void SetIsOwningPlayer();
    
    UFUNCTION()
    void OnPlayerExitedVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnPlayerEnteringVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
};

