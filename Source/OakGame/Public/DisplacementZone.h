#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObject.h"
#include "OnMovedActorDelegate.h"
#include "DisplacementZone.generated.h"

class AActor;
class UBoxComponent;
class UArrowComponent;

UCLASS()
class OAKGAME_API ADisplacementZone : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMovedActor OnMovedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> ClassesToPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedPullToCenter;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* BoxCollision;
    
    UPROPERTY(Export, VisibleAnywhere)
    UArrowComponent* ArrowDirectionComponent;
    
public:
    ADisplacementZone();
};

