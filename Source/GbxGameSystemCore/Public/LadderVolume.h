#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "LadderInterface.h"
#include "UObject/NoExportTypes.h"
#include "LadderVolume.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API ALadderVolume : public AVolume, public ILadderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector ClimbDirection;
    
    UPROPERTY()
    FVector Normal;
    
public:
    ALadderVolume();
    
    // Fix for true pure virtual functions not being implemented
};

