#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TrophyCaseBaseComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTrophyCaseBaseComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FName BaseTag;
    
    UTrophyCaseBaseComponent();
};

