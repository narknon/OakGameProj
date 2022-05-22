#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AINodeEventDelegate.h"
#include "AINode.generated.h"

class UAINodeComponent;
class APawn;

UCLASS()
class GBXAI_API AAINode : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAINodeComponent* AINodeComponent;
    
    UPROPERTY(BlueprintAssignable)
    FAINodeEvent OnPawnArrivedNode;
    
    UPROPERTY(BlueprintAssignable)
    FAINodeEvent OnPawnDepartedNode;
    
    AAINode();
private:
    UFUNCTION()
    void OnPawnDepartedNodeCB(AActor* NodeActor, APawn* DepartedPawn);
    
    UFUNCTION()
    void OnPawnArrivedNodeCB(AActor* NodeActor, APawn* ArrivedPawn);
    
};

