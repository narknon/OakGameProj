#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavigationTypes.h"
#include "OakVehicleNavCorrecter.generated.h"

class AGbxNavWorld;
class UWorld;
class UOakNavComponent;
class AOakVehicle;

USTRUCT(BlueprintType)
struct FOakVehicleNavCorrecter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UWorld* World;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Export, Transient)
    UOakNavComponent* OakNavComp;
    
    UPROPERTY(Transient)
    AOakVehicle* OakVehicle;
    
    UPROPERTY(Transient)
    FNavAgentProperties NavAgentProps;
    
public:
    OAKGAME_API FOakVehicleNavCorrecter();
};

