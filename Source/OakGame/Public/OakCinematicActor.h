#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "OakCinematicActor.generated.h"

UCLASS(Abstract)
class OAKGAME_API AOakCinematicActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bTeleportPhysic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bResetPhysic;
    
    AOakCinematicActor();
private:
    UFUNCTION(BlueprintCallable)
    void RemoveSlaveViewLocation(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void AddSlaveViewLocation(FName Name, FVector SlaveViewLocation);
    
};

