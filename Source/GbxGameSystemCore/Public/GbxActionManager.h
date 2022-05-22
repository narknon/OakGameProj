#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionStateNet.h"
#include "GbxActionManager.generated.h"

UCLASS(NotPlaceable, Transient)
class GBXGAMESYSTEMCORE_API AGbxActionManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    FActionStateNet ActionRepWrapper;
    
    AGbxActionManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

