#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxGrenadeIndicatorSortItem.h"
#include "GFxGrenadeIndicatorWidget.generated.h"

class UGFxGrenadeIndicatorClip;

UCLASS()
class UGFxGrenadeIndicatorWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float IndicatorDistanceFromCrosshair;
    
    UPROPERTY(EditAnywhere)
    FString IndicatorClass;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTrackedGrenades;
    
private:
    UPROPERTY(Transient)
    TArray<UGFxGrenadeIndicatorClip*> TrackedGrenades;
    
    UPROPERTY(Transient)
    TArray<FGFxGrenadeIndicatorSortItem> SortHelper;
    
public:
    UGFxGrenadeIndicatorWidget();
private:
    UFUNCTION()
    void EndTrackingGrenades() const;
    
    UFUNCTION()
    void BeginTrackingGrenades() const;
    
};

