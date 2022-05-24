#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AreaPlayerEventDelegate.h"
#include "EGbxAreaDrawStyle.h"
#include "GbxAreaComponent.generated.h"

class AVolume;
class APlayerController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxAreaComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<AVolume*> DetectionVolumes;
    
    UPROPERTY(EditInstanceOnly)
    bool bWorldAreaVolume;
    
    UPROPERTY(EditAnywhere)
    float DetectionRadius;
    
    UPROPERTY(EditAnywhere)
    float DetectionHalfHeight;
    
    UPROPERTY(EditAnywhere)
    bool bWorldAreaRadius;
    
    UPROPERTY(EditInstanceOnly)
    bool bManualTest;
    
    UPROPERTY(BlueprintAssignable)
    FAreaPlayerEvent OnPlayerEnteredArea;
    
    UPROPERTY(BlueprintAssignable)
    FAreaPlayerEvent OnPlayerExitedArea;
    
    UPROPERTY(EditAnywhere)
    EGbxAreaDrawStyle DrawStyle;
    
private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<APlayerController>> PlayersDetected;
    
public:
    UGbxAreaComponent();
    UFUNCTION()
    void AreaTest();
    
};

