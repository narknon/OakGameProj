#pragma once
#include "CoreMinimal.h"
#include "GbxAction_SimpleAnim.h"
#include "AnimMeshList.h"
#include "GbxAction_AICharge.generated.h"

class AActor;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_AICharge : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bSetLoopSpeedManually;
    
    UPROPERTY(EditAnywhere)
    float AnimLoopSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float LoopBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float StopBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshList> StartAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshList> LoopAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshList> MissAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshList> StrikeAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshList> HitWallAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshList> ReachCliffAnims;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimMeshList> StopForFriendlyAnims;
    
public:
    UGbxAction_AICharge();
    UFUNCTION(BlueprintNativeEvent)
    void OnStrike(AActor* Actor) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStopForFriendly(AActor* Actor) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnReachCliff(AActor* Actor) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMiss(AActor* Actor) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLoop(AActor* Actor) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHitWall(AActor* Actor) const;
    
};

