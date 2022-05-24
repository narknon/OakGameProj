#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "GbxNavAgentProperties.h"
#include "NumericRange.h"
#include "GbxNavUserEdgeTrailComponent.generated.h"

class UGbxUserEdge;
class AGbxNavWorld;
class UHavokUserEdge;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavUserEdgeTrailComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UGbxUserEdge* GbxUserEdge;
    
    UPROPERTY(EditAnywhere)
    float EdgeWidth;
    
    UPROPERTY(EditAnywhere)
    float AgentRadius;
    
    UPROPERTY(EditAnywhere)
    float AgentHalfHeight;
    
    UPROPERTY(EditAnywhere)
    float NavCheckDistance;
    
    UPROPERTY(EditAnywhere)
    FNumericRange ValidEdgeLength;
    
    UPROPERTY(EditAnywhere)
    int32 MaxActiveEdges;
    
    UPROPERTY(EditAnywhere)
    float TraceRadius;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Transient)
    FGbxNavAgentProperties AgentProps;
    
    UPROPERTY()
    TSubclassOf<UHavokUserEdge> UserEdge;
    
public:
    UGbxNavUserEdgeTrailComponent();
};

