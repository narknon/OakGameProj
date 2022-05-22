#pragma once
#include "CoreMinimal.h"
#include "HolsteredGearAttachmentSlot.generated.h"

class AHolsteredGearSlot;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FHolsteredGearAttachmentSlot {
    GENERATED_BODY()
public:
    UPROPERTY()
    AHolsteredGearSlot* OuterSlot;
    
    UPROPERTY(Export)
    UMeshComponent* Mesh;
    
    OAKGAME_API FHolsteredGearAttachmentSlot();
};

