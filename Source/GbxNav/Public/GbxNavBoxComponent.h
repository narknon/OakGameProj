#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GbxTriggerProperty.h"
#include "GbxNavBoxComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxTriggerProperty AutoResize;
    
public:
    UGbxNavBoxComponent();
private:
    UFUNCTION()
    void DoAutoResize();
    
};

