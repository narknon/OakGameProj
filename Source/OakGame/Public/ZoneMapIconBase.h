#pragma once
#include "CoreMinimal.h"
#include "ZoneMapDisplayActor.h"
#include "ZoneMapIconNotificationTempDelegate.h"
#include "ZoneMapIconBase.generated.h"

class AActor;
class AZoneMapViewer;

UCLASS()
class OAKGAME_API AZoneMapIconBase : public AZoneMapDisplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDisplayInFastTravelList;
    
    UPROPERTY(BlueprintAssignable)
    FZoneMapIconNotificationTemp OnBeginZoneMapCursorOver;
    
    UPROPERTY(BlueprintAssignable)
    FZoneMapIconNotificationTemp OnEndZoneMapCursorOver;
    
    UPROPERTY(BlueprintAssignable)
    FZoneMapIconNotificationTemp OnActivatePOI;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* SpawnedFromActor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AZoneMapViewer* ZoneMap;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bActivated;
    
public:
    AZoneMapIconBase();
    UFUNCTION(BlueprintNativeEvent)
    void ViewModeChanged();
    
    UFUNCTION(BlueprintNativeEvent)
    void SetHighlighted(bool bNewActivated);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanActivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Activate();
    
};

