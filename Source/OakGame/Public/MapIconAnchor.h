#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ZoneMapIconInfo.h"
#include "MapIconAnchor.generated.h"

class UOakZoneMapIcon;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UMapIconAnchor : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FZoneMapIconInfo IconInfo;
    
    UPROPERTY(Transient)
    UOakZoneMapIcon* AssociatedMapIcon;
    
    UMapIconAnchor();
};

