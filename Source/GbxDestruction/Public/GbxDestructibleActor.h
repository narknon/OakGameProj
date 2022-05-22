#pragma once
#include "CoreMinimal.h"
#include "DestructibleActor.h"
#include "GbxDestructibleNetBuffer.h"
#include "GbxDestructibleActor.generated.h"

UCLASS()
class GBXDESTRUCTION_API AGbxDestructibleActor : public ADestructibleActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_FractureBuffer)
    FGbxDestructibleNetBuffer FractureBuffer;
    
    UPROPERTY(ReplicatedUsing=OnRep_TransformBuffer)
    FGbxDestructibleNetBuffer TransformBuffer;
    
    UPROPERTY(ReplicatedUsing=OnRep_SyncID)
    uint32 SyncID;
    
public:
    AGbxDestructibleActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetFracturable(bool bFracturable);
    
    UFUNCTION()
    void OnRep_TransformBuffer();
    
    UFUNCTION()
    void OnRep_SyncID();
    
    UFUNCTION()
    void OnRep_FractureBuffer();
    
};

