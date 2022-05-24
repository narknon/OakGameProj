#pragma once
#include "CoreMinimal.h"
#include "ZoneMapPlayerIcon_POI.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapVehicleIcon_POI.generated.h"

class UZoneMapPOITypeData;
class UVehicleSeatComponent;
class AOakVehicle;
class AOakCharacter;

UCLASS()
class OAKGAME_API AZoneMapVehicleIcon_POI : public AZoneMapPlayerIcon_POI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* CatchARidePOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* PlayerPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* FriendlyPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* EmptyPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* EnemyPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ColorParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor EnemyColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PlayerColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NeutralColor;
    
    AZoneMapVehicleIcon_POI();
    UFUNCTION()
    void OnVehicleSeatsInitialized(AOakVehicle* AssociatedVehicle);
    
    UFUNCTION()
    void OnSpawnByCatchARideChanged();
    
    UFUNCTION()
    void OnSeatAttachStateChanged();
    
    UFUNCTION()
    void OnOtherCharacterExitedVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION()
    void OnOtherCharacterEnteredVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
};

