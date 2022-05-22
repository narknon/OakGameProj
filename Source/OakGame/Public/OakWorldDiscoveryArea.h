#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZoneMapPOIInterface.h"
#include "OakWorldDiscoveryArea.generated.h"

class UDiscoveryAreaComponent;

UCLASS()
class OAKGAME_API AOakWorldDiscoveryArea : public AActor, public IZoneMapPOIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UDiscoveryAreaComponent* DiscoveryComponent;
    
    AOakWorldDiscoveryArea();
    
    // Fix for true pure virtual functions not being implemented
};

