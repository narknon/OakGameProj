#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HavokUserEdgeActor.generated.h"

class UHavokUserEdgeComponent;

UCLASS()
class GBXNAV_API AHavokUserEdgeActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTransform EdgeEnd;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHavokUserEdgeComponent* UserEdgeComponent;
    
public:
    AHavokUserEdgeActor();
    UFUNCTION(BlueprintCallable)
    void SetEdgeEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEdgeEnabled() const;
    
};

