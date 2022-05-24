#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UObject/NoExportTypes.h"
#include "MissionIconObserverInterface.h"
#include "MissionObserverInterface.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxBounds.h"
#include "GFxMinimapWidgetIcon.h"
#include "MinimapBoundingCircle.h"
#include "Engine/EngineTypes.h"
#include "GFxMinimapWidget.generated.h"

class UGbxTextField;
class UTexture2D;
class UGbxGFxObject;
class AZoneMapViewer;
class UTexture;
class AOakChallengeManager;
class AMissionTracker;
class UOakMinimapIconComponent;

UCLASS()
class OAKGAME_API UGFxMinimapWidget : public UGbxGFxHUDWidget, public IMissionIconObserverInterface, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AreaWaypointToClampIconCushion;
    
    UPROPERTY(EditAnywhere)
    float NorthPseudoDistance;
    
    UPROPERTY(EditAnywhere)
    float BoundingRadius;
    
    UPROPERTY(EditAnywhere)
    float BoundTriggeringRadius;
    
    UPROPERTY(EditAnywhere)
    float ClampedIconPerfCutOff;
    
    UPROPERTY(EditAnywhere)
    FVector2D IconClampTransitionBounds;
    
    UPROPERTY(EditAnywhere)
    float MaxMapWorldTransitionTime;
    
    UPROPERTY(EditAnywhere)
    FString MinimapIconPrefix;
    
    UPROPERTY(EditAnywhere)
    FVector2D OriginalNorthPosition;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* DefaultTexture;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* ClampedIconStage;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ClampedSizeReference;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MailNotification;
    
    UPROPERTY(Transient)
    UGbxTextField* NorthTextField;
    
    UPROPERTY(Transient)
    FVector NorthPseudoLocation;
    
    UPROPERTY(Transient)
    AZoneMapViewer* ZoneMapViewer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InitializationWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MinimapTerrainObject;
    
    UPROPERTY(Transient)
    UTexture* CurrentMinimapTexture;
    
    UPROPERTY(Transient)
    FGbxGFxBounds ClampedIconStageBounds;
    
    UPROPERTY(Transient)
    TArray<FGFxMinimapWidgetIcon> TrackedIcons;
    
    UPROPERTY(Transient)
    FMinimapBoundingCircle TopLeftBoundingCircle;
    
    UPROPERTY(Transient)
    FMinimapBoundingCircle TopRightBoundingCircle;
    
    UPROPERTY(Transient)
    FMinimapBoundingCircle BottomLeftBoundingCircle;
    
    UPROPERTY(Transient)
    FMinimapBoundingCircle BottomRightBoundingCircle;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AMissionTracker> MissionTrackerRegisteredWith;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakChallengeManager> ChallengeManagerRegisteredWith;
    
    UPROPERTY(Transient)
    FTimerHandle RegisterTrackerTimerHandle;
    
    UPROPERTY(Transient)
    FTimerHandle RegisterChallengeTimerHandle;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> IconPool;
    
    UPROPERTY(Transient)
    FGFxMinimapWidgetIcon CustomWaypointIconData;
    
    UPROPERTY(Transient)
    int32 NextIconInstId;
    
    UPROPERTY(Transient)
    float NorthDegreeOffset;
    
    UPROPERTY(Transient)
    bool bFixedMinimapRotation;
    
    UPROPERTY(Transient)
    bool bNeedRefreshTrackedMissionIcons;
    
public:
    UGFxMinimapWidget();
protected:
    UFUNCTION()
    void OnMinimapIconComponentEndTracking(UOakMinimapIconComponent* MinimapIconComponent) const;
    
    UFUNCTION()
    void OnMinimapIconComponentBeginTracking(UOakMinimapIconComponent* MinimapIconComponent) const;
    
    UFUNCTION()
    void OnHasMailChanged(bool bNewHasMail) const;
    
private:
    UFUNCTION()
    void OnFixedMinimapRotationChanged(bool bNewValue) const;
    
protected:
    UFUNCTION()
    void OnCustomWaypointChanged(bool bDisplay, const FVector& WorldLocation) const;
    
private:
    UFUNCTION()
    void DeferredSetupForZoneMapViewer() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

