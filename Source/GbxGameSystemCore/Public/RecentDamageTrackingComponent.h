#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RecentlyCausedDamageInstance.h"
#include "RecentDamageTrackingComponent.generated.h"

class AGbxPlayerController;
class UFeedbackData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API URecentDamageTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AGbxPlayerController* PlayerController;
    
private:
    UPROPERTY(Replicated, Transient)
    FRecentlyCausedDamageInstance RecentlyCausedDamageInstances[6];
    
    UPROPERTY(Transient)
    TArray<UFeedbackData*> InstigatedFeedbacks;
    
public:
    URecentDamageTrackingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

