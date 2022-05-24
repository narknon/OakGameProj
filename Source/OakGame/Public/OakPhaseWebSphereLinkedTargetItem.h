#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakPhaseWebSphereBeamData.h"
#include "OakPhaseWebSphereLinkedTargetItem.generated.h"

class UParticleSystemComponent;
class AOakCharacter;

USTRUCT(BlueprintType)
struct FOakPhaseWebSphereLinkedTargetItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AOakCharacter* LinkedTarget;
    
    UPROPERTY(NotReplicated)
    FOakPhaseWebSphereBeamData BeamData;
    
    UPROPERTY(Export, NotReplicated)
    UParticleSystemComponent* BeamComponent;
    
    OAKGAME_API FOakPhaseWebSphereLinkedTargetItem();
};

