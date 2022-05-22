#pragma once
#include "CoreMinimal.h"
#include "CoverSlotViewFailData.h"
#include "Components/PrimitiveComponent.h"
#include "CoverLineOfSightData.h"
#include "ECoverSlotHeight.h"
#include "CoverSlotViewData.h"
#include "CoverSlotComponent.generated.h"

class UCoverSlotData;
class UCoverSlotComponent;
class APawn;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UCoverSlotComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UCoverSlotData* SlotType;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bAutoDetect;
    
    UPROPERTY(EditAnywhere)
    bool bValid;
    
    UPROPERTY(EditAnywhere)
    TArray<FCoverSlotViewData> Views;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCoverSlotViewFailData> FailedViews;
    
    UPROPERTY(EditAnywhere)
    ECoverSlotHeight SlotHeight;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<UCoverSlotComponent*> OverlappingSlots;
    
    UPROPERTY()
    FCoverLineOfSightData ExposedLosData;
    
    UPROPERTY(Transient)
    APawn* SlotOwnerUsing;
    
    UPROPERTY(Transient)
    APawn* SlotOwnerClaimed;
    
public:
    UCoverSlotComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

