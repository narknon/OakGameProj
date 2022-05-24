#pragma once
#include "CoreMinimal.h"
#include "OakFreezePresentation.h"
#include "OakPresentationParticleSystemWrapper.h"
#include "Engine/NetSerialization.h"
#include "OakEffectPresentationItem.h"
#include "AppliedMeshComponentTracker.h"
#include "OakPresentationParamTransitionInstance.h"
#include "OakEffectPresentationManager.generated.h"

class UOakStatusEffectManagerComponent;

USTRUCT(BlueprintType)
struct FOakEffectPresentationManager : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UOakStatusEffectManagerComponent* Owner;
    
    UPROPERTY()
    TArray<FOakEffectPresentationItem> Items;
    
    UPROPERTY()
    TArray<FOakPresentationParticleSystemWrapper> ParticleSystemWrappers;
    
    UPROPERTY()
    TArray<FOakPresentationParamTransitionInstance> PresentationTransitionInstances;
    
    UPROPERTY()
    FOakFreezePresentation FreezePresentation;
    
    UPROPERTY()
    FAppliedMeshComponentTracker MeshComponentTracker;
    
public:
    OAKGAME_API FOakEffectPresentationManager();
};

