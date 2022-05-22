#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChallengeLevelActorEventDelegate.h"
#include "ChallengeLevelActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeLevelParentComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UChallengeLevelParentComponent : public UChallengeLevelActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHideIfAssociatedActors;
    
    UPROPERTY(BlueprintAssignable)
    FChallengeLevelActorEvent OnAllAssociatedActorsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, Export, Replicated)
    TArray<UChallengeLevelActorComponent*> AssociatedActors;
    
    UChallengeLevelParentComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemoveAssociatedActorComponent(UChallengeLevelActorComponent* AssociatedComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAssociatedActor(AActor* AssociatedActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearAssociatedActors();
    
    UFUNCTION(BlueprintCallable)
    void AddAssociatedActor(AActor* AssociatedActor, TSubclassOf<UChallengeLevelActorComponent> ComponentClass, FVector RelativeOffset);
    
};

